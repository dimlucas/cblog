#include <stdio.h>
#include <stdlib.h>
#include "adt.h"

int main(void)
{
	Adt firstElement, secondElement;
	printf("Insert first element:");
	adtRead(stdin, &firstElement);
	printf("Insert second element:");
	adtRead(stdin, &secondElement);
	printf("First element = ");
	adtWrite(stdout, firstElement);
	printf("\nSecond element = ");
	adtWrite(stdout, secondElement);
	
	Adt addResult = addAdts(firstElement, secondElement);
	printf("\nFirst element + second element = "); 
	adtWrite(stdout, addResult);

	Adt subtractResult = subtractAdts(firstElement, secondElement);
	printf("\nFirst element - second element = ");
	adtWrite(stdout, subtractResult);

	Adt firstElementCopy, secondElementCopy;
	adtCopy(firstElement, &firstElementCopy);
	adtCopy(secondElement, &secondElementCopy);


	printf("\n");
	return 0;
}