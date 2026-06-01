# include <stdio.h>

// Constant tells the compiler the value should not change after it is declared.
const double PI = 3.14159265;
// If you try to change the value of  (constant) PI, the compiler will give an error.

//---------------------------------------------------------------------------------------
// const vs #define

#define MAX_SIZE 100
// Preprocessor directive that defines a constant value. It is replaced by the preprocessor before compilation.
// Simple text subsitution, no type whatsoever.

const int MAX_SIZE2 = 100;
// Constant variables are safer than #define because they are an actual variable.
// Therefore it is treated as such.

// Constant can be used for declaration or for argument parameters.

const int gravity = 9.81;

int compute(const int a, int b);
// Int a cannot be modified inside the function, but int b can be modified.

