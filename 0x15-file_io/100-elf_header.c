#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

/**
 * print_error - print error
 * @message: message
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - print_elf_header_info
 * @header: header
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64)
			? "ELF64" : "Invalid Class");
	printf("  Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's complement, little endian" : "Invalid Data Encoding");
	printf("  Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("  Type: %s\n", (header->e_type == ET_EXEC)
			? "EXEC (Executable file)" : "Invalid Type");
	printf("  Entry point address: %#lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Unable to open file");

	bytes_read = read(fd, &header, sizeof(header));

	if (bytes_read != sizeof(header) || memcmp(
				header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		close(fd);
		print_error("Error: Not an ELF file");
	}

	print_elf_header_info(&header);

	close(fd);
	return (0);
}
