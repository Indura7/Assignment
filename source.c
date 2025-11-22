#include <stdio.h>          //for printf, scanf,....
#include "functions.h"      //Header file with function prototypes


void get_input(int numbers[], int size){      //Get numbers from the user.

        for (int i=0;i<size;i++){             //Loop based on given size.
        printf("Enter number %d: ",i+1);      //Show which number to enter.
        scanf("%d",&numbers[i]);              //Stores input numbers inside the array.
    }
}


void display(int numbers[], int size){     //Print all elements of the array in one line
    int c=0;
    while(size!=c){
        printf(" %d",numbers[c]);
        c++;
    }
}

void compare_sets(int set1[], int set2[], int size){      //Compare two arrays

    printf("Enter first set of %d numbers \n",size);
    get_input(set1, size);                                //Read first array.
    display(set1,size);                                   //Show entered numbers.
    printf("\n");
    int mismatch_count =0;                               //Track mismatches.

    printf("\n Enter second set of %d numbers \n",size);
    get_input(set2, size);                              //Read first array.
    display(set2,size);                                 //Show entered numbers.
    printf("\n");

    for (int j=0;j<size;j++){                             //Compare two arrays one by one
        if(set1[j]!=set2[j]){
            mismatch_count++;                             //Count mismatch.
            if (mismatch_count==1){
                    printf("\nMismatch found at:\n");
                    printf("%d",j);                         //Print first mismatch.
                    continue;
            }
            printf(",%d",j);

        }
    }
    if (mismatch_count>=1){                                     //After counting mismatches
        printf("\n\nTwo integer sets are not identical\n");
        printf("Total mismatches found: \n%d",mismatch_count);
    }else{
    printf("\nTwo integer sets are identical");
    }
}



void display_pipes(int pnumbers[], int psize){                    //Print each number as'|'

    printf("\n\nLet's print numbers with pipes\n");
    get_input(pnumbers, psize);                                   //Recalling input function for get numbers from user
    display(pnumbers, psize);                                     //Recalling display function for show numbers
    char set[]="||||| ";                                          //5-Pipe block

    for (int i=0; i<psize; i++){
        int n=pnumbers[i];                                          //Taking the value of element
        printf("\n%2d    ",n);                                      //%2d = print number in 2-width field.

                int v=n/5;                                          //Number of 5-pipe block
                int r=n%5;                                          //Remaining pipes

                while(v>0){
                    printf("%s",set);                               //Print groups of 5.
                    v--;
                }
                while(r>0){
                    printf("|");                                    //Print leftover pipes.
                    r--;
                }


    }


}






