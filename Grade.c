#include <stdio.h>
#include <string.h>



    

    //name: AskNumber
    //inputs: prompt (string), lower bound (int), upper bound (int)
    //outputs: valid number entered
    //Purpose: Validates the input numbers to be between the bounds, used for 
    int AskNumber(char *c, int lower, int upper){

        int value;
        printf("%s", c);
        scanf("%d", &value);
        if(value >= lower && value <= upper){
            return value;
        }
        else{
            printf("Invalid input. Please enter a number between %d and %d", lower, upper);
        }

    }

    //name: AskClassNumbers
    //inputs:none
    //outputs: num_of_tests (int), num_of_projs (int), num_of_days (int)
    //purpose: get total numbers for these 3 values and invokes AskNumber to validate the numbers

    void AskClassNumbers(int *num_of_tests,int *num_of_projs,int *num_of_days){
        int const NUM_OF_VALUES = 50;
        
        char *s = "Please provide the number of tests you have taken: " ;
        *num_of_tests = AskNumber(s, 0, NUM_OF_VALUES);

        
        s = "Please provide the number of projects you've' had: ";
        *num_of_projs = AskNumber(s, 0, NUM_OF_VALUES);
       
       
       s = "Please provide the number of  attendance days you've' had: ";
       *num_of_days = AskNumber(s, 0, NUM_OF_VALUES);


    }

    //name: GetTestAverage
    //inputs: Num_of_Tests
    //outputs: average test scores entered
    //purpose: Gets the average of the test scores entered

    float GetTestAverage(int num_of_tests) {
        int *test_grades;
        int grades[num_of_tests];
        test_grades = &grades[0];
        for(int i = 0; i <= num_of_tests; i++){
            char *c = "Enter test %d", i;  
            
            *(test_grades + i) = AskNumber(c, 0, 100);
            printf("%d", *(test_grades + i));
        }
    }

    //name: GetProjectAverage
    //inputs: num_of_projs
    //outputs: returns the average of the project grades
    //purpose: To calculate the average of the entered project grades

    //name: GetAttendanceScore
    //input: total number of class days
    //outputs: returns attendance percentage
    //purpose: to get the percentage of attendance for the student 

    //name:  CalcPercentage
    //inputs: testavg, projavg, attendance
    //outputs: returns overall score based upon scores listed above
    //purpose: to get students numerical grades

    //name: GetLetterGrade
    //inputs: overall score
    //outputs: returns the letter grade associated with the score
    //purpose: to get letter grade

    //name: PrintStudent
    //inputs: names, 3 averages, overall score, and letter grade
    //outputs: prints the report 


    int main(void){
    char *c = "Welcome to the Grade Calculator"; 
    printf("------Welcome to the Grade Calculator------\n");

    size_t val = strlen(c);
    //printf("%zu\n", val);

    int middle = val/2;
   // printf("%d\n", middle);

    int start = middle/2;

    char *me = "by Chandler Staggs\0";

    printf("| %*s%s                      |\n", start,"", me);
    printf("|____________________________________________|\n\n");
    
    //--------------------------------------------AskClassNumbers----------------------
    int num_of_tests;
    int num_of_projs;
    int num_of_days;
    AskClassNumbers(&num_of_tests, &num_of_projs, &num_of_days);
    printf("Number of Tests are %d, Number of projects are %d, Number of days in class are %d", num_of_tests, num_of_projs, num_of_days);

    GetTestAverage(num_of_tests);
    }