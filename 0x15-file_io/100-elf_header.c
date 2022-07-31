#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void print_header(const char* filename)
{
    int file;
	ssize_t reading, writing;
	char *data;
	ElfW(Ehdr) e_hdr;


	file = open(filename, O_RDONLY);
	if(file == -1)
		exit(99);

    lseek(file, 0, SEEK_SET);
	data = malloc(sizeof(ElfW(Ehdr)));
	data = e_hdr;
	reading = read(file, data, sizeof(ElfW(Ehdr)));

	if(reading == -1)
	{
		close(file);
		exit(99);
	}

	if(data.e_type == 0x7f && data.e_ident[1] == 'E' &&
       data.e_ident[2] == 'L' && data.e_ident[3] == 'F')
	{
		writing = write(STDOUT_FILENO, data, sizeof(e_hdr));
		if (writing == -1)
		{
			close(file);
			exit(99);
		}
	}

	close(file);
}




int main(int argc, const char **argv)
{

    if (argc != 2 || argv[1] == NULL)
    {
        dprintf(2, "Usage: %s binary_file\n", argv[0]);
        exit(97);
    }

    print_header(argv[1]);

    return (0);
}

