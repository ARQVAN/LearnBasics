#include <stdio.h>

int main()
{
	FILE *file = fopen("data.txt", "r");
	char buff[100];

	if (file == NULL) {
		printf("Error opening file!\n");
		return -1;
	}

	while (fgets(buff, sizeof(buff), file) != NULL) {
		printf("%s", buff);
	}

	fclose(file);

	return 0;
}
