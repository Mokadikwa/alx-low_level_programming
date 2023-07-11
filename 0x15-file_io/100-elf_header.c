#include "main.h"

/**
 * display_elf_header - program that displays the information,
 * contained in the ELF header at the start of an ELF file.
 * @filename: the name of the file
 */

void display_elf_header(const char *filename)
{
	Elf64_Ehdr header;
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file '9%s'\n", filename);
		exit(98);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error: Failed to read ELF header\n");
		close(fd);
		exit(98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: File '%s' is not an ELF file\n", filename);
		close(fd);
		exit(98);
	}
	printf("Magic: %c%c%c%c\n",
			header.e_ident[EI_MAG0], header.e_ident[EI_MAG1],
			header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("Class: %d-bit\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2MSB ?
			"big-endian" : "little-endian");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: 0x%x\n", header.e_type);
	printf("Entry point address: 0x%lx\n", header.e_entry);

	close(fd);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}
	display_elf_header(argv[1]);

	return (0);
}
