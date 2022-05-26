#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int j = 1;
	int i = 0;
	for (j = 1; j < argc; j++) {
		for (i = 0; argv[j][i] != '\0'; i++) {
			char letter = argv[j][i];

			if (strchr("AEIOUY", letter) != NULL) {
				letter += 32;
			}

			switch (letter) {
				case 'a':
					printf("%d: 'A'\n", i);
					break;

				case 'e':
					printf("%d: 'E'\n", i);
					break;
	
				case 'i':
					printf("%d: 'I'\n", i);
					break;

				case 'o':
					printf("%d: 'O'\n", i);
					break;

				case 'u':
					printf("%d: 'U'\n", i);
					break;

				case 'y':
					if (i > 2) {
						// it's only sometimes y
						printf("%d: 'Y'\n", i);
					}
					break;

				default:
					printf("%d: %c is not a vowel\n", i, letter);
			}
		}
	}
}