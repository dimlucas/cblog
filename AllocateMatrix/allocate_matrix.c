#include <stdio.h>
#include <stdlib.h>

int** allocateMatrix(int rows, int cols);
void freeMatrix(int** matrix, int rows);
void initMatrix(int** matrix, int rows, int cols);
void initMatrixZero(int** matrix, int rows, int cols);
void printMatrix(int** matrix, int rows, int cols);
void example(int rows, int cols);

int main(void)
{
	//A simple example with a square matrix
	example(4,4);
	//A more asymmetric matrix
	example(5,3);
}

void example(int rows, int cols)
{
	int** matrix = allocateMatrix(rows,cols);
	initMatrix(matrix, rows, cols);
	printf("\nMatrix:\n");
	printMatrix(matrix, rows, cols);
	// freeMatrix(&matrix, rows, cols);
}

int** allocateMatrix(int rows, int cols)
{
	int* arr = malloc(rows*cols*sizeof(int));
	int** matrix = malloc(rows*sizeof(int*));
	int i;
	for(i=0; i<rows; i++)
	{
		matrix[i] = &(arr[i*cols]);
	}
	return matrix;
}

void freeMatrix(int** matrix, int rows)
{
	int i;
	for(i=0; i<rows; i++)
	{
		free(matrix[i]);
	}
	free((matrix));
}

void initMatrix(int** matrix, int rows, int cols)
{
	int i,j;
	int number = 1;
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			matrix[i][j] = number;
			number++;
		}
	}
}

void initMatrixZero(int** matrix, int rows, int cols)
{
	int i,j;
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

void printMatrix(int** matrix, int rows, int cols)
{
	int i,j;
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
}