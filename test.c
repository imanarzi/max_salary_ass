#include "max_salary.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
void stress_test(){
  	//static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  	srand(time(NULL));   // Initialization, should only be called once.

  	while (1) {
    		//int * arr = malloc(sizeof(int) * 5);
		int arr[5];
		for (int i=0; i<5; i++){
          		arr[i] = rand() % 500 + 1;
    	}


	int result1 = heap_permutation(arr, 5, 5);
	int result2 = greedy_algorithm(arr, 5);

	if (result1==result2)
		printf("OK\n");
    	else {
      		printf("Wrong answer: correct=%d, got instead=%d\n", result1, result2);
          	exit(0);
        }
	//free(arr);
	}
}

int main(){
	stress_test();
	return 0;
}
