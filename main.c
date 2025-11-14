#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void get_input(int set1[], int size);

int main(){

int set1[5];
int set2[5];
int size =5;

    get_input(set1,size);
    printf("First set of number %d\n",set1[0]);
    printf("Hello world!\n");
    return 0;


}
