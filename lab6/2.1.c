#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int pid = fork();
	if (pid == 0)
		printf("PID: %d, PPID: %d\n", getpid(), getppid());
	return 0;
}
