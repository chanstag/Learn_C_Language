#include <stdio.h>
#include <string.h>

int main(void){
    char *c = "Welcome to the Grade Calculator"; 
    printf("------Welcome to the Grade Calculator------\n");

    size_t val = strlen(c);
    //printf("%zu\n", val);

    int middle = val/2;
   // printf("%d\n", middle);

    int start = middle/2;

    char *me = "by Chandler Staggs\0";

    printf("%*s%s\n", start,"", me);

    }

    void run(){
        char tests[100];
        printf("Please provide the number of tests you have taken: ");
        fgets(tests, 100, stdin);
        printf("Please provide the number of projects you've' had: ");
        fgets(input, 100, stdin);


    }

    //name: AskNumber
    //inputs: prompt (string), lower bound (int), upper bound (int)
    //outputs: valid number entered
    //Purpose: Validates the input numbers to be between the bounds, used for 

    //name: AskClassNumbers
    //inputs:none
    //outputs: num_of_tests, num_of_projs, num_of_days
    //purpose: get total numbers for these 3 values and invokes AskNumber to validate the numbers

    //name: GetTestAverage
    //inputs: Num_of_Tests
    //outputs: average test scores entered
    //
