#include "main.h"

/**
 * create_file - creating a file
 *
 * @filename: string
 * @text_content: text to be written
 *
 * Return: integer
 */

int create_file(const char *filename, char *text_content)
{
        int i = 0, num = 0, create = open(filename, O_WRONLY);
        mode_t permission = S_IRUSR | S_IWUSR;

        if (filename == NULL)
        return (-1);

        if (create == -1)
        {
                close(create);
                create = open(filename, O_CREAT | permission);
                if (create == -1)
                return (-1);
        }

        while (text_content[i] != 0)
        i++;

        num = write(create, text_content, i);

        if (num == 0 && i != 0)
        return (-1);

        return (1);
}