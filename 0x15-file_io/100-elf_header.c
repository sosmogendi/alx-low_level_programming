#include "main.h"


/**
 * print_error_msg - prints an error message to
 * stderr and exits with code 98
 * @error_msg: the error message to print
 */

void print_error_msg(const char *error_msg)
{
	fprintf(stderr, "Error: %s\n", error_msg);
	exit(98);
}

/**
 * print_elf_header_info - prints information from an ELF header
 * @header: pointer to the ELF header
 */

void print_elf_header_info(const Elf64_Ehdr *header)
{
	int x;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (x = 0; x < EI_NIDENT; x++)
	{
		printf("%02x ", header->e_ident[x]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
	header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

	printf("  Data:                              %s\n",
	header->e_ident[EI_DATA] == ELFDATA2LSB ?
	"2's complement, little endian" :
	"2's complement, big endian");

	printf("  Version:                           %d\n",
	header->e_ident[EI_VERSION]);

	printf("  OS/ABI:                            %s\n",
	header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
	header->e_ident[EI_OSABI] == ELFOSABI_HPUX ? "UNIX - HP-UX" :
	header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
	header->e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" :
	header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" :
	header->e_ident[EI_OSABI] == ELFOSABI_IRIX ? "UNIX - IRIX" :
	header->e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "UNIX - FreeBSD" :
	header->e_ident[EI_OSABI] == ELFOSABI_TRU64 ? "UNIX - TRU64" :
	header->e_ident[EI_OSABI] == ELFOSABI_ARM ? "ARM" :
	header->e_ident[EI_OSABI] == ELFOSABI_STANDALONE ? "Standalone App" :
	"<unknown>");

	printf("  ABI Version:                       %d\n",
	header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_type);
	}
	printf("  Entry point address:               %#lx\n",
	(unsigned long) header->e_entry);
}

/**
 * main - displays information about the ELF header of a file
 * @argc: the number of arguments
  * @argv: an array of arguments
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		print_error_msg("Usage: elf_header elf_filename");
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error_msg("Error: Cannot open the file");
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error_msg("Error: Cannot read the file");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error_msg("Error: Not an ELF file");
	}
	print_elf_header_info(&header);
	if (close(fd) == -1)
	{
		print_error_msg("Error: Cannot close the file");
	}
	return (0);
}
