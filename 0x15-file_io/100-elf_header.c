/*
 * File: 100-elf_header.c
 * Auth: Iguagbonmwen Osaivbie
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */

/* Main function */
int main(int argc, char *argv[])
{
	int fd, elfclass;
	unsigned char e_ident[EI_NIDENT];
	Elf32_Ehdr elf32_hdr;
	Elf64_Ehdr elf64_hdr;

    /* Open ELF file */

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open file '%s'\n", argv[1]);
		exit(1);
	}

    /* Read ELF header */
	if (read(fd, &e_ident, EI_NIDENT) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read ELF header\n");
		close_elf(fd);
		exit(1);
	}

    /* Check if file is ELF */
	check_elf(e_ident);

    /* Determine ELF class */
	elfclass = e_ident[EI_CLASS];

    /* Read ELF header */
	if (elfclass == ELFCLASS32)
	{
		if (read(fd, &elf32_hdr, sizeof(elf32_hdr)) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot read ELF header\n");
			close_elf(fd);
			exit(1);
		}
	}
	else if (elfclass == ELFCLASS64)
	{
		if (read(fd, &elf64_hdr, sizeof(elf64_hdr)) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot read ELF header\n");
			close_elf(fd);
			exit(1);
		}
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Invalid ELF class\n");
		close_elf(fd);
		exit(1);
	}

    /* Print ELF header */
	print_magic(e_ident);
	print_class(e_ident);
	print_data(e_ident);
	print_version(e_ident);
	print_abi(e_ident);
	print_osabi(e_ident);
	print_type((elfclass == ELFCLASS32)
			? elf32_hdr.e_type : elf64_hdr.e_type, e_ident);
	print_entry((elfclass == ELFCLASS32)
			? elf32_hdr.e_entry : elf64_hdr.e_entry, e_ident);

    /* Close file */
	close_elf(fd);

	return 0;
}

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
/* Helper functions */

void check_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != ELFMAG0 ||
			e_ident[EI_MAG1] != ELFMAG1 ||
			e_ident[EI_MAG2] != ELFMAG2 ||
			e_ident[EI_MAG3] != ELFMAG3)
	{
		printf("Error: Not an ELF file\n");
		exit(1);
	}

	if (e_ident[EI_CLASS] != ELFCLASS64)
	{
		printf("Error: Not a 64-bit ELF file\n");
		exit(1);
	}

	if (e_ident[EI_DATA] != ELFDATA2LSB)
	{
		printf("Error: Not little-endian\n");
		exit(1);
	}

	if (e_ident[EI_VERSION] != EV_CURRENT)
	{
		printf("Error: Invalid ELF version\n");
		exit(1);
	}

	if (e_ident[EI_OSABI] != ELFOSABI_SYSV)
	{
		printf("Error: Not a System V ABI ELF file\n");
		exit(1);
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */

void print_magic(unsigned char *e_ident)
{
	printf("ELF Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */

void print_class(unsigned char *e_ident)
{
	printf("ELF Class: ");
	switch (e_ident[EI_CLASS]) {
        case ELFCLASSNONE:
            printf("Invalid class\n");
            break;
        case ELFCLASS32:
            printf("32-bit ELF\n");
            break;
        case ELFCLASS64:
            printf("64-bit ELF\n");
            break;
        default:
            printf("Unknown class\n");
            break;
    }
}

/**
 * print_data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */

void print_data(unsigned char *e_ident) {
	printf("Data Encoding: ");
	switch (e_ident[EI_DATA]) {
        case ELFDATANONE:
            printf("Invalid data encoding\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Unknown data encoding\n");
            break;
    }
}

/**
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */

void print_version(unsigned char *e_ident)
{
	printf("ELF Version: ");
	if (e_ident[EI_VERSION] == EV_NONE) 
	{
		printf("Invalid version\n");
	}
	else if (e_ident[EI_VERSION] == EV_CURRENT) 
	{
		printf("1 (current)\n");
	}
	else
	{
		printf("Unknown version\n");
	}
}
/**
 * print_abi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */

void print_abi(unsigned char *e_ident)
{
	printf("ABI: ");
	switch (e_ident[EI_OSABI]) {
	case ELFOSABI_SYSV:
            printf("System V ABI\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX ABI\n");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD ABI\n");
            break;
        case ELFOSABI_LINUX:
            printf("Linux ABI\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("Solaris ABI\n");
            break;
        case ELFOSABI_AIX:
            printf("AIX ABI\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("FreeBSD ABI\n");
            break;
        case ELFOSABI_TRU64:
            printf("TRU64 UNIX ABI\n");
            break;
        case ELFOSABI_ARM_AEABI:
            printf("ARM EABI\n");
            break;
        default:
            printf("Unknown ABI\n");
            break;
    }
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.   */

void print_osabi(unsigned char *e_ident)
{
	printf("OS/ABI Version: ");
	if (e_ident[EI_ABIVERSION] == 0) {
	printf("0 (invalid)\n");
	}
	else 
	{
		printf("%d\n", e_ident[EI_ABIVERSION]);
	}
}
/**
 * print_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 */


void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_type = ((e_type << 8) & 0xff00) | ((e_type >> 8) & 0xff);
	}

	printf("Type: ");
	switch (e_type)
	{
		case ET_NONE:
			printf("None\n");
			break;
		case ET_REL:
			printf("Relocatable\n");
			break;
		case ET_EXEC:
			printf("Executable\n");
			break;
		case ET_DYN:
			printf("Shared object\n");
			break;
		case ET_CORE:
			printf("Core\n");
			break;
		default:
			printf("Unknown (%d)\n", e_type);
			break;
	}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */

void print_entry(unsigned long int e_entry,
		unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB) 
	{
		e_entry = ((e_entry << 24) & 0xff000000)
			| ((e_entry << 8) & 0xff0000)
			| ((e_entry >> 8) & 0xff00)
			| ((e_entry >> 24) & 0xff);
	}

	printf("Entry point: 0x%lx\n", e_entry);
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */

void close_elf(int elf)
{
	close(elf);
}
