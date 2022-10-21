// a data table of type Meal ~ another c file
/*
Salad: $9.95
Soup: $4.55
Sandwich: $13.25
Pizza: $22.35
*/


#include <string.h> 

#include <stdlib.h> 

#include "meal.h" 

Meal MealTable[] =  

{ 
    {"Salad", 9.95},

    {"Soup", 4.55},

    {"Sandwich", 13.25},

    {"Pizza", 22.35},

}; 

const int MealTableEntries = sizeof(MealTable)/sizeof(MealTable[0]); 