#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	while (i < 25) {
		printf("%d\n", i);
		i++;
	}

	i = 25;
	while (i > -1) {
		printf("%d\n", i);
		i--;
	}

	printf("\n");

	char first_president[] = "George Washington";
	for (i = 0; i < 17; i++) {
		printf("%c\n", first_president[i]);
	}

	return 0;
}