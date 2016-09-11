#include <stdio.h>
#include <stdlib.h>
#include "adt.h"

void readAdt(FILE* stream, Adt* input)
{
	fscanf(stream, "%d", &(input->value));
}

void writeAdt(FILE* stream, Adt output)
{
	fprintf(stream, "%d", output.value);
}

void copyAdt(Adt source, Adt* dest)
{
	dest->value = source.value;
}
