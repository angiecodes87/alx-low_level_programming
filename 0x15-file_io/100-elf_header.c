#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
	fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
	exit(98);
	}

	if ((fd = open(argv[1], O_RDONLY)) < 0) {
	fprintf(stderr, "Error: cannot open %s\n", argv[1]);
	exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
	fprintf(stderr, "Error: cannot read ELF header from %s\n", argv[1]);
	exit(98);
	}
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
	printf("%02x ", header.e_ident[i]);
	}
	printf("\n");

	printf("  Class:           %s\n", header.e_ident[EI_CLASS] ==
ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:            %s\n", header.e_ident[EI_DATA] ==
ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:         %d (current)\n", header.e_ident[EI_VERSION])
;
	printf("  OS/ABI:          %s\n", header.e_ident[EI_OSABI] ==
ELFOSABI_SYSV ? "UNIX - System V" : "UNIX - unknown");
	printf("  ABI Version:     %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header.e_type)
	{
	case ET_NONE: printf("NONE (None)\n");
	break;
	case ET_REL: printf("REL (Relocatable file)\n");
	break;
	case ET_EXEC: printf("EXEC (Executable file)\n");
	break;
	case ET_DYN: printf("DYN (Shared object file)\n");
	break;
	case ET_CORE: printf("CORE (Core file)\n");
	break;
	default:
	printf("<unknown: %x>\n", header.e_type);
	break;
	}
	printf("  Entry point address:               0x%lx\n", header.e_entry);

	close(fd);
	return (0);
}

