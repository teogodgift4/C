/*
 ============================================================================
 Name        : bubbleSort.c
 Author      : FreakSoul teo.godgift4@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int * const, const int);

int main(void) {
	int *table;
	int size;

	printf("Please give the size of your table\n");
	scanf("%d",&size);
	table=(int*)malloc(sizeof(int)*size);
	//unsorted table with random values
	for(int i=0;i<size;i++)
		table[i]=rand()%35;
	printf("Unsorted table:\n");
		for(int i=0;i<size;i++)
		printf("%d\n",table[i]);
		printf("*********\n");
		printf("Sorted table with bubbleSort algorithm:\n");
		bubbleSort(table,size);
		for(int i=0;i<size;i++)
			printf("%d\n",table[i]);
		return EXIT_SUCCESS;
}
void bubbleSort(int * const array,const int size){

	void swap(int *element1Ptr,int *element2Ptr);
	int pass;
	int j;

	for(pass=0;pass<size-1;pass++){
		for(j=0;j<(size-pass-1);++j){
			if(array[j]>array[j+1])
			{
				swap(&array[j],&array[j+1]);
			}
		}
	}

}

void swap(int *element1Ptr,int *element2Ptr){

	int hold=*element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr=hold;

}
