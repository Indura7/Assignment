#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

//Prototypes of functions
void get_input(int numbers[], int size);
void display(int numbers[], int size);
void compare_sets(int set1[], int set2[], int size);

int main(){

 int size =10;           //This one can change the sizes of arrays and loops.
 int set1[size];
 int set2[size];


    printf("\n Enter first set of %d numbers \n",size);
    get_input(set1, size);
    display(set1,size);
    printf("\n");

    printf("\n Enter second set of %d numbers \n",size);
    get_input(set2, size);
    display(set2,size);
    printf("\n");

    compare_sets(set1, set2, size);
    printf("\nHELLO WORLD\n");
    return 0;


}
