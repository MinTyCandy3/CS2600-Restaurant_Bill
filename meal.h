#include <stdio.h> 
#include <stddef.h> 

// type Meal should contain: name and price ~ header file
typedef struct { 

    char *name;

    double price;

} Meal, *PtrToMeal; 

typedef const Meal *PtrToConstMeal; 