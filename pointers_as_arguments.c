// Pointers as arguments to functions


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void some_function(int* some_ptr ) {
    printf("%lu\n", some_ptr);
    *some_ptr = 11;
}

void another_function(int* some_ptr) {
    printf("%lu\n", some_ptr);
    some_ptr = (int*) malloc(sizeof(int));
    printf("%lu\n", some_ptr);
    *some_ptr = 12;
}

int main()
{
    
    int value = 10;
    int *int_ptr = &value;
    
    some_function(int_ptr);
    printf("%d\n", value);
    
    another_function(int_ptr);
    printf("%d\n", value);
    
    return 0;
}

/* Output

140730048053556
11
140730048053556
15274016
11

*/