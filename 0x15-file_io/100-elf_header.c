#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void check_file(unsigned char *file);
void print_magic(unsigned char *m);
void print_class(unsigned char *c);
void print_data(unsigned char *d);
void print_version(unsigned char *v);
void print_OSABI(unsigned char *oa);
void print_ABIversion(unsigned char *av);
void print_type(unsigned int i, unsigned char *t);
void print_EPA(unsigned long int e1, unsigned char *e);
void close_file(int file);

/**
 * check_file - check if the file is ELF file or not.
 * @file: The pointer to the file to be checked.
 * Return: nothing to return.
 */

void check_file(unsigned char *file)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (file[i] != 127 && file[i] != 'E' &&
				file[i] != 'L' &&
				file[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error not an elf file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints the magic from the file.
 * @m: The pointer to the magic field in the file.
 * Return: nothing to return.
 */

void print_magic(unsigned char *m)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", m[i]);
		if (i < EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}

/**
 * print_class - Prints the class in the file.
 * @c: The pointer to the class field in the file.
 * Return: nothing to return.
 */

void print_class(unsigned char *c)
{
	printf(" Class:   ");

	switch (c[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
		default:
			printf("<unknown: %x>\n", c[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data in the file.
 * @d: The pointer to the data field in the file.
 * Return: nothing to return.
 */

void print_data(unsigned char *d)
{
	printf("  Data:  ");

	switch (d[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", d[EI_DATA]);
	}
}

/**
 * print_version - Prints the version in the file.
 * @v: The pointer to the version field in the file.
 * Return: nothing to return.
 */

void print_version(unsigned char *v)
{
	printf("  Version:   %d", v[EI_VERSION]);

	switch (v[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_OSABI - Prints the os/ABI in the file.
 * @oa: The pointer to the OS/ABI field in the file.
 * Return: nothing to return.
 */

void print_OSABI(unsigned char *oa)
{
	printf("  OS/ABI:   ");

	switch (oa[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone APP\n");
			break;
		default:
			printf("<unknown: %x>\n", oa[EI_OSABI]);
	}
}

/**
 * print_ABIversion - Prints the ABI version in the file.
 * @av: The pointer to the ABI version field in the file.
 * Return: nothing to return.
 */

void print_ABIversion(unsigned char *av)
{
	printf("  ABI Version:   %d", av[EI_ABIVERSION]);
}

/**
 * print_type - Prints the tpye in the file.
 * @i: The type of the file.
 * @t: The pointer to the type field in the file.
 * Return: nothing to return.
 */

void print_type(unsigned int i, unsigned char *t)
{
	if (t[EI_DATA] == ELFDATA2MSB)
		i = i >> 8;
	printf("  Type:   ");
	switch (i)
	{
		case ET_NONE:
			printf("NONE (NONE)\n");
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
			printf("<unknown: %x>\n", i);
	}
}

/**
 * print_EPA - Prints the Entry Point Address in the file.
 * @e1: The address of the ELf Entry Point.
 * @e: The pointer to the Entry Point Address field in the file.
 * Return: nothing to return.
 */

void print_EPA(unsigned long int e1, unsigned char *e)
{
	printf("  Entry point address:   ");

	if (e[EI_DATA] == ELFDATA2MSB)
	{
		e1 = ((e1 << 8) & 0xFF00FF00) | ((e1 >> 8) & 0xFF00FF);
		e1 = (e1 << 16) | (e1 >> 16);
	}
	if (e[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e1);
	}
	else
	{
		printf("%#lx\n", e1);
	}
}

/**
 * close_file - Closes the ELF file.
 * @file: The file to be closed.
 * Return: nothing to return.
 */

void close_file(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "ERROR, Can't close fd %d\n", file);
		exit(98);
	}
}

/**
 * main - displays the information contained in the ELF header
 * at the start of an ELF file.
 * @argc: The number of the arguments.
 * @argv: The array of the arguments.
 * Return: 0 in success.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int opens, reads;

	opens = open(argv[1], O_RDONLY);
	if (opens == -1)
	{
		dprintf(STDERR_FILENO, "ERROR, Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_file(opens);
		dprintf(STDERR_FILENO, "ERROR, Can't read file %s\n", argv[1]);
		exit(98);
	}
	reads = read(opens, header, sizeof(Elf64_Ehdr));
	if (reads == -1)
	{
		free(header);
		close_file(opens);
		dprintf(STDERR_FILENO, "ERROR, NO such file as %s\n", argv[1]);
		exit(98);
	}
	check_file(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_OSABI(header->e_ident);
	print_ABIversion(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_EPA(header->e_entry, header->e_ident);
	free(header);
	close_file(opens);
	return (0);
}
