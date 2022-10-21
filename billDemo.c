#include <string.h> 
#include <stdlib.h> 
#include "meal.h" 

/*

gcc billDemo.c mealTable.c

*/

// code main here
int main(int argc, char *argv[]){ 

    // int main taking in two arguments, the tax and the tip
        /*
        example output:
        -------------------------------------------
        [Meal]: $0.00
        Tax: [user's input]% of Meal
        Tip: [user's input]% of Meal

        Total: 
        -------------------------------------------
        end of output
        */

    char *ptrTax;
    char *ptrTip;
    int tax;
    int tip;

    // handle arguments to get tax and tip
    long taxArg = strtol(argv[1], &ptrTax, 10);
    long tipArg = strtol(argv[2], &ptrTip, 10);
    tax = (int) taxArg;
    tip = (int) tipArg;

    printf("-------------------------------------------\n");
    for(int i=0; i < argc; i++)
    {
        printf("Argv [%d]: %s\n", i, argv[i]);
    }
    printf("-------------------------------------------\n");
    printf("TAX: %d PERCENT\n", tax);
    printf("TIP: %d PERCENT\n", tip);
    printf("-------------------------------------------\n");

    // randomly choose from Meal table for meal

    // display all necessary info (refer to example output)


    return EXIT_SUCCESS; 
} 