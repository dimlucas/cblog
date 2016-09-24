#include <stdio.h>
#include <stdlib.h>
#include "adt.h"

typedef struct Adt
{
	int value;
}Adt;


void adtRead(FILE* stream, Adt* input)
{
	fscanf(stream, "%d", &(input->value));
}

void adtWrite(FILE* stream, Adt output)
{
	fprintf(stream, "%d", output.value);
}



void adtCopy(Adt source, Adt* dest)
{
	dest->value = source.value;
}

Adt adtAdd(Adt operand1, Adt operand2)
{
	Adt result;
	result.value = operand1.value + operand2.value;
	return result;
}

Adt adtSubtract(Adt operand1, Adt operand2)
{
	Adt result;
	result.value = operand1.value - operand2.value;
	return result;
}


Adt adtSumArray(Adt array[], int size)
{
	int i;
	Adt result;
	result.value = 0;
	for(i=0; i<size; i++)
	{
		result.value += array[i].value;
	}
	return result;
}