#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*
	Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char* string;
	char* stopstring;
	long double x;

	string = "3.1415926535898This stopped it";
	x = strtold(string, &stopstring);

	printf("string = %s\n", string);
	printf("   strtold = %.13Lf\n", x);
	printf("   Stopped scan at: %s\n\n", stopstring);

	_getch();
	return 0;
}