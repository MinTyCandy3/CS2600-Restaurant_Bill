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
    float taxPercentage;
    float tipPercentage;
    float tax;
    float tip;

    extern Meal MealTable[];
    extern int MealTableEntries;
    float priceOfMeal;

    float totalPrice;

    srand(time(NULL));

    // handle arguments to get tax and tip
    taxPercentage = strtof(argv[1], &ptrTax);
    tipPercentage = strtof(argv[2], &ptrTip);
    
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

    // calculate tax and tip
    tax = priceOfMeal * (taxPercentage/100.0);
    tip = priceOfMeal * (tipPercentage/100.0);
    totalPrice = priceOfMeal + tax + tip;

    // display info
    printf("-------------------------------------------\n");
    printf("%s: $%.2f\n", MealTable[mealNum].name, priceOfMeal);
    printf("TAX: $%.2f\n", tax);
    printf("TIP: $%.2f\n\n", tip);

    printf("TOTAL: $%.2f\n", totalPrice);
    printf("-------------------------------------------\n");

    return EXIT_SUCCESS; 
} 