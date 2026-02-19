#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(){

 int size =8;                                 //Size of integer sets
 int set1[size];                              //First integer set
 int set2[size];                              //Second integer set

 int psize =5;                                //Size of pipe numbers
 int pnumbers[psize];                         //Array to hold pipe numbers
 int x;                                       //Control function menue

 printf("------------------------\n   ASSIGNMENT MENU   \n------------------------\n");
 printf(" 1. Compare Sets\n 2. Display Pipes\n 3. Exit\n------------------------\n");
 printf("  Press whatever you like  \n");

 scanf("   %d",&x);

 switch(x){
    case 1:                                           //Compare two integer sets
        compare_sets(set1, set2, size);
        break;
    case 2:                                           //Display numbers with pipes
        display_pipes(pnumbers, psize);
        break;
    case 3:
        printf("Exiting...");                         //Exit message
        break;
    default:
        printf("\n  Wrong input..\nPlease try again  ");

    }
    return 0;
}

