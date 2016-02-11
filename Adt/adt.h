#ifndef _ADT_H_
#define _ADT_H_

typedef struct Adt;

//Reads adt from specified stream
void adtRead(FILE* stream, Adt* input);

//Writes adt to specified stream
void adtWrite(FILE* stream, Adt output);

//Copies contents from source to dest
void adtCopy(Adt source, Adt* dest);

//Returns 1 if the two elements are equal, 0 if they're not
int adtEquals(Adt element1, element2);

//Performs addition of operand1 and operand2 and returns the result
Adt adtAdd(Adt operand1, Adt operand2);

//Subtracts operand2 from operand1 and returns the result
Adt adtSubtract(Adt operand1, Adt operand2);

//Sums all elements inside the array
Adt adtSumArray(Adt array[], int size);

#endif