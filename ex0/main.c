#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    int size_of_input;
    int input;
    double result;                                          //log base 2 of the input will save in 'result'
    int total_exponent_sum=6666666;
    int i;                                                 //used for the "for" loop
    char str_result[4000]="\0";
    char str_temp[200]="\0";

    printf ("Enter size of input:\n");                     //the user enter the size of the input
    scanf("%d", &size_of_input);

    if(size_of_input<=0){
        printf("Invalid size\n");                          //the size of the input is invalid size
        return 0;
    }

    printf("Enter numbers:\n");
    for(i=0; i<size_of_input; i++)                         //the user begin to enter the numbers
    {
        if(scanf("%d", &input)!=1) {
            printf("Invalid number\n");                                   //its mistake
            return 0;
        }
        else {
            result= log10(input)/log10(2);
            if (result-(int)result==0){                      //check if the result is a Integer number
                sprintf(str_temp,"The number %d is a power of 2: %d = 2^%d\n", input, input, (int)result);
                strcat(str_result,str_temp);
                total_exponent_sum=total_exponent_sum + (int)result;
            }
        }

    }
    printf("%s",str_result);
    printf("Total exponent sum is %d\n",total_exponent_sum);

    return 0;
}