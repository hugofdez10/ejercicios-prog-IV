#include "ComplexNumber.h"
#include "ComplexNumber.c"

#include <stdio.h>

int main(void)
{
	Complex c1 = { 2.0f, 5.0f };
	Complex c2 = { 4.0f, 1.0f };

	Complex c = sumar(c1, c2);

	print(c1);
	printf(" + ");
	print(c2);
	printf(" = ");
	print(c);
	printf("\n");

	printf("Mod: %.2f\n", modulo(c1));

	printf("Size of complex %lu bytes\n", sizeof(c1));	


	print(c1);
	printf(" - ");
	print(c2);
	printf(" = ");
	restar(&c1, &c2);
	print(c1);
	printf("\n");

	return 0;
}


