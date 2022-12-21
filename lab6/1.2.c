#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[]) 
{
	char **ptr;
	int counter = 0;
	for (ptr = environ; *ptr != NULL; ptr++)
		counter++;
	printf("%d\n", argc);
	printf("%d\n", counter);
	return 0;
}
