#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[]) 
{
	char **p;
	int counter = 0;
	for (p = environ; *p != NULL; p++)
		counter++;
	printf("%d\n", counter);
	return 0;
}
