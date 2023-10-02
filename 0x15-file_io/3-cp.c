#include "main.h"

/**
 * main - main function
 *
 * @ac:
 * @arg:
 *
 * Return:integer
 */

int main(int ac, const char *arg[])
{
	int read_num, file1, file2, num, fileto, filefrom;
	mode_t permission = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fileto = open(arg[2], O_WRONLY);
	filefrom = open(arg[1], O_RDONLY);

	if (fileto == -1)
	{
		fileto = open(arg[2], O_CREAT | O_WRONLY | permission);
	}

	if (filefrom == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", arg[1]);
		exit(98);
	}

	while ((read_num = read(filefrom, buffer, BUFFER_SIZE)))
	{
		num = write(fileto, buffer, read_num);
	}

	if (num == -1 || fileto == -1)
	{
		fprintf(stderr, "Error: Can't write to %s", arg[2]);
		exit(99);
	}
	close(fileto);
	close(filefrom);

	file1 = fcntl(fileto, F_GETFD);
	file2 = fcntl(filefrom, F_GETFD);

	if (file1 != -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}
	
	if (file2 != -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
	

	return (0);
}