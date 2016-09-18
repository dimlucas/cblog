#include <stdio.h>
#include <stdlib.h>

void printArr(int array[], int size);
void altPrintArr(int* array, int size);

int main(void)
{
	int array[8] = { 6, 4, 5, 7, 9, 1, 0, 2 };
	int* dynamicArray = malloc(8*sizeof(int));
	//Always check if malloc succeeded in allocating enough space
	if(dynamicArray == NULL)
	{
		fprintf(stderr, "Memory Allocation Failed\n");
		exit(EXIT_FAILURE);
	}
	dynamicArray[0] = 6;
	dynamicArray[1] = 4;
	dynamicArray[2] = 5;
	dynamicArray[3] = 7;
	dynamicArray[4] = 9;
	dynamicArray[5] = 1;
	dynamicArray[6] = 0;
	dynamicArray[7] = 2;

	//Printing first element of array using []
	printf("array[0] = %d\n", array[0]);	//6
	//Printing first element of array using *
	printf("(*array) = %d\n", (*array));	//6
	//Printing fifth element of array using []
	printf("array[4] = %d\n", array[4]);  //9
	//Printing fifth element of array using *
	printf("*(array + 4) = %d\n", array[4]);

	//Same for dynamic array
	//Printing first element of dynamicArray using []
	printf("dynamicArray[0] = %d\n", dynamicArray[0]);	//6
	//Printing first element of dynamicArray using *
	printf("(*dynamicArray) = %d\n", (*dynamicArray));  //9
	//Printing fifth element of dynamicArray using []
	printf("dynamicArray[4] = %d\n", dynamicArray[4]);	//9
	//Printing fifth element of dynamicArray using *
	printf("*(dynamicArray + 4) = %d\n", *(dynamicArray + 4));  //9

	printf("array contents:\n");
	printArr(array, 8);

	printf("dynamicArray contents:\n");
	printArr(dynamicArray, 8);

	printf("array contents (alternative method):\n");
	altPrintArr(array, 8);

	printf("dynamicArray contents (alternative method):\n");
	altPrintArr(array, 8);

	//Always free reserved memory
	free(dynamicArray);
}

void printArr(int array[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void altPrintArr(int* array, int size)
{	
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}
