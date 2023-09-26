#include <stdio.h>
#include <string.h>

void copy_one_string_to_another(char* src, char* dest) {
	while (*src != '\0') {
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main() {
	// using a char array
	char str1[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	// using a string latteral
	char str2[] = "Hello";
	// using a pointer to a symbol
	char* str3 = "Hello";

	char stringCopy[6];

	copy_one_string_to_another(str3, stringCopy);
	printf("Original string: %s\n", str3);
	printf("Copied string: %s\n", stringCopy);

	return 0;
}
