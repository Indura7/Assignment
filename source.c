#include <stdio.h>          //for use printf,scanf,....
#include "functions.h"      //Our Function Header file


void get_input(int numbers[], int size){

        for (int i=0;i<size;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&numbers[i]);
    }
}


void display(int numbers[], int size){     //Display the array that user had been inputted.
    int c=0;
    while(size!=c){
        printf(" %d",numbers[c]);
        c++;
    }
}

void compare_sets(int set1[], int set2[], int size){

    printf("Enter first set of %d numbers \n",size);
    get_input(set1, size);
    display(set1,size);
    printf("\n");
    int mismatch_count =0;         //Record mismatch count.

    printf("\n Enter second set of %d numbers \n",size);
    get_input(set2, size);
    display(set2,size);
    printf("\n");

    for (int j=0;j<size;j++){
        if(set1[j]!=set2[j]){
            mismatch_count++;
            if (mismatch_count==1){
                    printf("\nMismatch found at:\n");
                    printf("%d",j); //Print first mismatch.
                    continue;       //Just because use ,(comma) perfectly.
            }
            printf(",%d",j);

        }
    }
    if (mismatch_count>=1){                                     //After counting mismatches
        printf("\n\nTwo integer sets are not identical\n");
        printf("Total mismatches found: \n%d",mismatch_count);
    }else{
    printf("\nTwo integer sets are identical");                //If those two are same.
    }
}



void display_pipes(int pnumbers[], int psize){

    printf("Let's print numbers with pipes\n");
    get_input(pnumbers, psize);
    display(pnumbers, psize);


    char set[]="||||| ";
    for (int i=0; i<psize; i++){
        int n=pnumbers[i];
        printf("\n%2d    ",n);  //That 2 before d is to keep two spaces.

                int v=n/5;
                int r=n%5;
                //printf("%d is v ",v);
                //printf("%d is r",r);

                while(v>0){
                    printf("%s",set);
                    v--;
                }
                while(r>0){
                    printf("|");
                    r--;
                }


    }


}






