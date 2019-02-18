#include "max_salary.h"
#include <string.h>
int * best_arr;

void print_array(int *arr, int size){
  for (int i=0; i<size; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}

double naive_max = 0;
// Generating permutation using Heap Algorithm 
int heap_permutation(int a[], int size, int n) 
{ 
    // if size becomes 1 then do something with the obtained permutation   
    if (size == 1) 
    { 
        //TO DO - instead of printing, insert your code for evaluating the next candidate array
 	//make array a string
 	char str[n + 1];
 	sprintf(str, "%d", a[0]);
	for(int i = 0; i < n; i++){
		sprintf(strlen(str) + str, "%d", a[i]);
//		printf("%s\n", str);
	}
 	//make string a double
 	double d = atof(str);
 	//compare
 	int temp = d;  
	if(temp > naive_max)
		naive_max = temp; 
        return naive_max; 
    } 
  
    for (int i=0; i<size; i++) 
    { 
        heap_permutation(a,size-1,n); 
  
        // if size is odd, swap first and last element 
        if (size%2==1) {
            SWAP(a[0], a[size-1]); 
		}
        // If size is even, swap ith and last element 
        else{
            SWAP(a[i], a[size-1]);
	}			
    }
    return naive_max;
} 
  
// Code to test permutations
int main() { 
    int a[] = {1, 2, 3, 4}; 
    int n = sizeof a/sizeof a[0]; 
    printf("%d\n", heap_permutation(a, n, n)); 
    return 0; 
} 
