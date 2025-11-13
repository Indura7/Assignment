#include <stdio.h>          //for use printf,scanf,....
#include "functions.h"      //Our Function Header file


int get_input(){
    int size=5;
    int numbers[5];
    for (int i=0;i<5;i++){
        printf("Enter number %d:",i+1);
        scanf("%d",&numbers[i]);
    }
    return numbers[];
