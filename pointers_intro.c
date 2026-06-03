#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a; // ptr is a pointer to an integer, initialized to the address of a

    // Note that & gets the address of a variable.
    // * in declaration means pointer to, which gives us a pointer variable.
    // Using * after delclaration means dereferencing the pointer, which gives us the value at the address. 

    printf("Value of a: %d\n", a); // Output: 10
    printf("Address of a: %p\n", (void*)&a); // Output: address of a
    printf("Value of ptr: %p\n", (void*)ptr); // Output: address of a (same as above)
    printf("Value pointed to by ptr: %d\n", *ptr); // Output: 10

    *ptr = 20; // Change the value at the address pointed to by ptr

    printf("New value of a: %d\n", a); // Output: 20
    printf("Value pointed to by ptr after change: %d\n", *ptr); // Output: 20

    return 0;
}