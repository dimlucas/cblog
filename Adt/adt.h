#ifndef _ADT_H_
#define _ADT_H_

typedef struct Adt
{
	int value;
}Adt;

/**
* Reads a value from a file stream
* @param stream: Where to read from
* @param input: Where to store the data
*/
void readAdt(FILE* stream, Adt* input);

/**
* Writes the output data to a file stream
* @param stream: Where to write the data
* @param output: What data to write
*/
void writeAdt(FILE* stream, Adt output);

/**
* Copies data from one adt to another
* @param source: Where to copy from
* @param dest: Copy destination
*/
void copyAdt(Adt source, Adt* dest);



#endif