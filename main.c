#include <stdio.h>
//#include <stdlib.h>
#include "functions.h"

//Prototypes of functions
void compare_sets(int set1[], int set2[], int size);
void display_pipes(int pnumbers[], int psize);

int main(){

 int size =5;           //number of elements for the two sets
 int set1[size];
 int set2[size];

 int psize =5;          //number of elements for pipe display
 int pnumbers[psize];

    compare_sets(set1, set2, size);     //Task 1
    display_pipes(pnumbers, psize);     //Task 2

    return 0;


}
