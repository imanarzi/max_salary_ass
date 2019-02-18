#ifndef MAX_SALARY_H
#define MAX_SALARY_H
//extern "C"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SWAP(a,b) {int temp; temp=a; a=b; b=temp;}

void print_array(int *arr, int size);
int heap_permutation(int a[], int size, int n);
int greedy_algorithm(int * arr, int n);
#endif
