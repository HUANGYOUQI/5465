#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void bubbleSort(int *const  array, unsigned int size);	//ptototype

int main(void) 
{
	//initialize array a
	int a[SIZE]={5,8,1,6,7,0,3,4,9,2};
	
	unsigned int i;	//counter
	
	puts("Data items in original order");
	
	//loop through array a
	for(i=0;i<SIZE;++i){
		printf("%4d",a[i]);
	}	//end for
	
	bubbleSort(a,SIZE);	//sort the array
	
	puts("\nData items in ascending order ");
	
	//loop through array a
	for (i=0;i<SIZE;++i){
		printf("%4d",a[i]);
	}	//end for
	
	puts("");
}	//end main
