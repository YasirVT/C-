#include<stdio.h>
int main()
{
	size_t mem_length;
	char (*my_memory)[sysconf(_SC_PAGESIZE)] = mmap(
			NULL
			, mem_length
			, PROT_READ | PROT_WRITE
			, MAP_PRIVATE | MAP_ANONYMOUS
			, -1
			, 0
			);

	int i;
	for (i = 0; i * sizeof(*my_memory) < mem_length; i++) {
		my_memory[i][0] = 1;
	}
}
