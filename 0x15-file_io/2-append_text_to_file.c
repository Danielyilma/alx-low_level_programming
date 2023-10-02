#include "main.h"

/**
 *
 *
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
        int i = 0, fd = open(filename, O_APPEND);

        if (!filename || fd == -1)
        return (-1);

        while (text_content[i] != '\0')
        i++;

        write(fd, text_content, 1);

        return (1);
}