#include "max_salary.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
double naive_max = 0;
int heap_permutation(int a[], int size, int n)
{
    if (size == 1)
    {
        char str[100];
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

void stress_test(){
  	//static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  	srand(time(NULL));   // Initialization, should only be called once.
	int arr[5];
  	while (1) {
    		//int * arr = malloc(sizeof(int) * 5);
		//int arr[5];
		for (int i=0; i<5; i++){
          		arr[i] = rand() % 10 + 1;
    			printf("%d\n", arr[i]);
		}
		int n = sizeof arr/sizeof arr[0];
//		printf("this is n: %d\n", n);

		int result1 = heap_permutation(arr, n, n);
		int result2 = greedy_algorithm(arr, 5);

//		printf("%d\n", result2);
		if (result1==result2)
			printf("OK\n");
    		else {
      			printf("Wrong answer: correct=%d, got instead=%d\n", result1, result2);
          		exit(0);
        	}
	naive_max = 0;
//	free(arr);
	}
}

int main(){
	stress_test();
	return 0;
}
