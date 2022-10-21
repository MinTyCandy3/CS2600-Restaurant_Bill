#include <time.h>
#include <string.h> 
#include <stdlib.h> 
#include "meal.h" 

/*

gcc billDemo.c mealTable.c

*/

long randomizeMeal();

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

    // Variables
    char *ptrTax;
    char *ptrTip;
    int taxPercentage;
    int tipPercentage;

    extern Meal MealTable[];
    extern int MealTableEntries;
    long priceOfMeal;

    srand(time(NULL));

    // handle arguments to get tax and tip
    long taxArg = strtol(argv[1], &ptrTax, 10);
    long tipArg = strtol(argv[2], &ptrTip, 10);
    taxPercentage = (int) taxArg;
    tipPercentage = (int) tipArg;

    // printf("-------------------------------------------\n");
    // for(int i=0; i < argc; i++)
    // {
    //     printf("Argv [%d]: %s\n", i, argv[i]);
    // }
    // printf("-------------------------------------------\n");
    // printf("TAX: %d PERCENT\n", taxPercentage);
    // printf("TIP: %d PERCENT\n", tipPercentage);
    // printf("-------------------------------------------\n");

    // randomly choose from Meal table for meal
    srand(time(NULL));
    int mealNum = rand() % MealTableEntries;
    priceOfMeal = MealTable[mealNum].price;

    // for(int i=0; i < 10; i++)
    // {
    //     printf("[%d]: %s\n", i, MealTable[mealNum].name);
    //     mealNum = rand() % 4;
    // }


    // display all necessary info (refer to example output)


    return EXIT_SUCCESS; 
} 