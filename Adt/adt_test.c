#include <stdio.h>
#include <stdlib.h>
#include "adt.h"

int main(void)
{
	Adt element;
	printf("Insert element: ");
	readAdt(stdin, &element);
	printf("Element is: ");
	writeAdt(stdout, element);
	printf("\n");
	Adt copy;
	copyAdt(element, &copy);
	printf("Copy = ");
	writeAdt(stdout, copy);
	printf("\n");
	return 0;
}