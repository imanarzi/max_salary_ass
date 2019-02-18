#include "max_salary.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int is_better(const void * best_so_far, const void *  current){ //comparator
        int bsf = * (const int*) best_so_far;
        int c = * (const int*)  current;
        //turn into string
        char str1[100];
	char str2[100];
	sprintf(str1, "%d", bsf);
	sprintf(str2, "%d", c);
	strcat(str1, str2);
	//printf(str1);
	double d1 = atof(str1);

	char str3[100];
	char str4[100];
	sprintf(str3, "%d", bsf);
	sprintf(str4, "%d", c);
	strcat(str4, str3);
	//printf(str4);
	double d2 = atof(str4);

        if(d2 > d1)
                return 1;
        return 0;
}

int greedy_algorithm(int * arr, int n){
	qsort(arr, n, sizeof(int), is_better);
	//make array a string
        char str[n + 1];
        sprintf(str, "%d", arr[0]);
        for(int i = 1; i < n; i++){
                sprintf(strlen(str) + str, "%d", arr[i]);
//              printf("%s\n", str);
        }
//      make string a double
        double d = atof(str);
	return d;
}
/*
int main(){
    int a[] = {11, 232, 43, 4, 5}; 
    int n = sizeof a/sizeof a[0]; 
    printf("%d\n", greedy_algorithm(a, n)); 
    return 0;
	
}*/

