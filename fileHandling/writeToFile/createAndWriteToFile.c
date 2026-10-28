#include <stdio.h>

int main()
{
	FILE *file = fopen("data.txt", "w");

	if (file == NULL) {
		printf("File opening failed!\n");
		return -1;
	}

	char name[] = "Alice Johnson";
	int age = 30;

	fprintf(file, "Name: %s\n", name);
	fprintf(file, "Age: %d years\n", age);

	fclose(file);

	printf("Data successfully written to data.txt\n");

	return 0;
}
