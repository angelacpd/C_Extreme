#include <stdio.h>
#include <stdbool.h>

int main() {

    struct SomeData {
	    int value;
	    char ch;
	    bool is_valid;
    };

    struct SomeData some_data;
    some_data.value = 2;
    some_data.ch = 'a';
    some_data.is_valid = true;

    struct SomeData *struct_ptr = &some_data;
    struct_ptr->value = 5;
    
    printf("struct_ptr: %lu\n", struct_ptr);
    printf("*struct_ptr: %lu\n", *struct_ptr);
    printf("struct_ptr->value: %d\n", struct_ptr->value);
    printf("struct_ptr->ch: %c\n", struct_ptr->ch);
    printf("struct_ptr->is_valid: %d\n", struct_ptr->is_valid);
    
    return 0;
}

/* Output

struct_ptr: 140721662241440
*struct_ptr: 5
struct_ptr->value: 5
struct_ptr->ch: a
struct_ptr->is_valid: 1

*/