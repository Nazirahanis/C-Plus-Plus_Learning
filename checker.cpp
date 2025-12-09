#include <stdio.h>
#include <string.h>

int main(void) {

	char input[128];

	printf("Enter the flag: ");

	if (!fgets(input, sizeof(input), stdin)) {
		return 1;
	}

	input[strcspn(input, "\n")] = 0;

	const char* target = "4a5e632f7c";

	if (strcmp(input, target) == 0) {
		puts("CyberX{f14g_ch3cqer_demo}");
	}
	else {
		puts("Incorrect");
	}

	puts("\n(Press Enter to exit)");

	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF);

	return 0;

}