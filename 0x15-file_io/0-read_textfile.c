#include "main.h"
/*by div-styl*/
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	size_t  size;
	FILE *filename;

	if (filename == NULL)
		return (0);
	filename = fopen(filename, "r");
	if (filename == NULL)
		return  (0);
	buff = malloc(sizeof(char) * letters);
	size  = fread(buff, sizeof(char), letters, filename);
	if (ferror(filename) || size  == 0)
	{
		free(buff);
		fclose(filename);
		return (0);
	}
	size = fwrite(buff, sizeof(char), size, stdout);
	if (ferror(stdout))
	{
		free(buff);
		fclose(filename);
		return (0);
	}
	free(buff);
	fclose(filename);
	return (size);
}
