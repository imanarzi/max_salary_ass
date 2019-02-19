//#include "max_salary.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "max_salary.h"
int * best_arr;

void print_array(int *arr, int size){
  for (int i=0; i<size; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}

/*double naive_max = 0;
// Generating permutation using Heap Algorithm 
int heap_permutation(int a[], int size, int n) 
{ 
    if (size == 1) 
    { 
 	char str[n + 1];
 	sprintf(str, "%d", a[0]);
	for(int i = 1; i < n; i++){
		sprintf(strlen(str) + str, "%d", a[i]);
	}
 	double d = atof(str);
 	int temp = d;  
	if(temp > naive_max)
		naive_max = temp; 
        return naive_max; 
    } 
  
    for (int i=0; i<size; i++) 
    { 
        heap_permutation(a,size-1,n); 
  
        if (size%2==1) {
            SWAP(a[0], a[size-1]); 
		}
        else{
            SWAP(a[i], a[size-1]);
	}			
    }
    return naive_max;
} 
  
// Code to test permutations
int main() { 
    int a[] = {1, 22, 353, 94}; 
    int n = sizeof a/sizeof a[0]; 
    printf("%d\n", heap_permutation(a, n, n)); 
    return 0; 
}*/
