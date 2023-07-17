#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void test_elf(unsigned char *);
void print_magic(unsigned char *);
void print_class(unsigned char *i);
void print_data(unsigned char *i);
void print_version(unsigned char *i);
void print_abi(unsigned char *i);
void print_osabi(unsigned char *i);
void print_type(unsigned int t, unsigned char *i);
void print_entry(unsigned long int r, unsigned char *i);
void exit_elf(int elf);

/**
 * test_elf - This program checks if a file is an ELF file
 * @i: This is pointer to an array
 * Return: Exit code 98 if file is not an elf file
 */
void test_elf(unsigned char *index)
{
	int e;

	for (e = 0; e < 4; e++)
	{
		if (i[e] != 127 &&
				index[e] != 'E' &&
				index[e] != 'L' &&
				index[e] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - This program prints the magic numbers of an ELF
 * @i: A pointer to an array containing the ELF
 */
void print_magic(unsigned char *i)
{
	int e;

	printf("  Magic:   ");

	for (e = 0; e < EI_NIDENT; e++)
	{
		printf("%02x", i[e]);

		if (e == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - This program prints the class of an ELF
 * @i: A pointer to an array
 */
void print_class(unsigned char *i)
{
	printf("  Class:                             ");

	switch (i[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", i[EI_CLASS]);
	}
}

/**
 * print_data - This program prints the data of an ELF
 * @i: A pointer to an array
 */
void print_data(unsigned char *i)
{
	printf("  Data:                              ");

	switch (i[EI_DATA])
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
		printf("<unknown: %x>\n", i[EI_CLASS]);
	}
}

/**
 * print_version - This program prints the version of an ELF
 * @i: A pointer to an array
 */

void print_version(unsigned char *i)
{
	printf("  Version:                           %d",
	       i[EI_VERSION]);

	switch (i[EI_VERSION])
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
 * print_os_abi - A program that prints the OS/ABI of an ELF
 * @i: A pointer to an array
 */
void print_os_abi(unsigned char *i)
{
	printf("  OS/ABI:                            ");

	switch (i[EI_OSABI])
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
		printf("UNIX - Linux\n");
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
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", i[EI_OSABI]);
	}
}
/**
 * print_abi - This program prints the ABI version of an ELF
 * @i: A pointer to an array
 */
void print_abi(unsigned char *i)
{
	printf("  ABI Version:                       %d\n", 
	i[EI_ABIVERSION]);
}
/**
 * print_type - A program that prints the type of an ELF
 * @t: This represents as the elf type
 * @i: A pointer to an array
 */
void print_type(unsigned int t, unsigned char *i)
{
	if (i[EI_DATA] == ELFDATA2MSB)
		t >>= 8;
	printf("  Type:                              ");

	switch (t)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", t);
	}
}
/**
 * print_entry - A program that prints the entry point of an ELF
 * @r: This is the entry point of the elf
 * @i: A pointer to an array
 */
void print_entry(unsigned long int r, unsigned char *i)
{
	printf("  Entry point address:               ");

	if (i[EI_DATA] == ELFDATA2MSB)
	{
		r = ((e_entry << 8) & 0xFF00FF00) |
			  ((r >> 8) & 0xFF00FF);
		r = (r << 16) | (r >> 16);
	}

	if (r[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)r);

	else
		printf("%#lx\n", r);
}

/**
 * exit_elf - A program that exit an ELF file
 * @elf: The file descriptor of the ELF
 * Return: Exit code 98 if the file is not an elf
 */
void close_elf(int elf)
{
	if (exit(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - A program that displays the information contained 
 * in the ELF header at the start of an ELF file
 * @argc: The argument count at the start of the program
 * @argv: An array of pointers to the arguments
 * Return: Always 0 on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *h;
	int a, v;

	a = open(argv[1], O_RDONLY);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		close_elf(a);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	v = read(a, h, sizeof(Elf64_Ehdr));
	if (v == -1)
	{
		free(h);
		close_elf(a);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	test_elf(h->i);
	printf("ELF Header:\n");
	print_magic(h->i);
	print_class(h->i);
	print_data(h->i);
	print_version(h->i);
	print_os_abi(header->i);
	print_abi(h->i);
	print_type(h->t, h->i);
	print_entry(h->r, header->i);

	free(h);
	close_elf(a);
	return (0);
}
