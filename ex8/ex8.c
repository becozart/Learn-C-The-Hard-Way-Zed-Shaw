#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;
	
	if (argc == 1) {
		printf("You don't have any arguments.\n");
	} else if (argc > 1 && argc < 4) {
		printf("Here are your arguments:\n");
	
		for (i = 1; i < argc; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else {
		printf("You have too many arguments.\n");
	}

	return 0;
}