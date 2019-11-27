// Mathematical operators
/*
Introduction to preprocessor macros
Notice the use of the macro PRINT( )to save typing (and typing errors!). 
Preprocessor macros are traditionally named with all uppercase letters so they stand out – 
you’ll learn later that macros can quickly become dangerous (and they can also be very useful).
The arguments in the parenthesized list following the macro name are substituted in all 
the code following the closing parenthesis. The preprocessor removes the name PRINT 
and substitutes the code wherever the macro is called, so the compiler cannot generate 
any error messages using the macro name, and it doesn’t do any type checking on the arguments 
(the latter can be beneficial, as shown in the debugging macros at the end of the chapter).
*/
#include <iostream>
using namespace std;
// A macro to display a string and a value.
#define PRINT(STR, VAR) \
 cout << STR " = " << VAR << endl
int main() {
     int i, j, k;
     float u, v, w;  // Applies to doubles, too
     cout << "enter an integer: ";
     cin >> j;
     cout << "enter another integer: ";
     cin >> k;
     PRINT("j",j);  PRINT("k",k);
     i = j + k; PRINT("j + k",i);
     i = j - k; PRINT("j - k",i);
     i = k / j; PRINT("k / j",i);
     i = k * j; PRINT("k * j",i);
    i = k % j; PRINT("k % j",i);
    // The following only works with integers:
    j %= k; PRINT("j %= k", j);
    cout << "Enter a floating-point number: ";
    cin >> v;
    cout << "Enter another floating-point number:"; cin >> w;
    PRINT("v",v); PRINT("w",w);
    u = v + w; PRINT("v + w", u);
    u = v - w; PRINT("v - w", u);
    u = v * w; PRINT("v * w", u);
    u = v / w; PRINT("v / w", u);
    // The following works for ints, chars,
    // and doubles too:
    PRINT("u", u); PRINT("v", v);
    u += v; PRINT("u += v", u);
    u -= v; PRINT("u -= v", u);
    u *= v; PRINT("u *= v", u);
    u /= v; PRINT("u /= v", u);
} //
