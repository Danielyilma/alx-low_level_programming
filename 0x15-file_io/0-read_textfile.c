#include "main.h"

/**
 *
 *
 *
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
        int read_textfile;
        char *buffer = malloc(letters);
        size_t ch_read = 0;

        read_textfile = open(filename, O_RDONLY);

        if (read_textfile == -1 || !filename)
        return (0);

        ch_read = read(read_textfile, buffer, letters);
        write(1, buffer, letters);

        free(buffer);

        return (ch_read);
}