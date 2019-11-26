/*

Linkage To understand the behavior of C and C++ programs, you need to know about linkage . In an executing program, an identifier is represented by storage in memory that holds a variable or a compiled function body. Linkage describes this storage as it is seen by the linker. There are two types of linkage: internal linkage and external linkage . 
Internal linkage means that storage is created to represent the identifier only for the file being compiled. Other files may use the same identifier name with internal linkage, or for a global variable, and no conflicts will be found by the linker – separate storage is created for each identifier. Internal linkage is specified by the keyword static in C and C++. 


#include <iostream> using namespace std; 
 
// This is not actually external, but the  // compiler must be told it exists somewhere: extern int i;  extern void func(); int main() {   i = 0;   func(); } int i; // The data definition void func() {   i++;   cout << i; } ///:~ 
 
When the compiler encounters the declaration ‘extern int i’, it knows that the definition for i must exist somewhere as a global variable. When the compiler reaches the definition of i, no other declaration is visible, so it knows it has found the same i declared earlier in the file. If you were to define i as static, you would be telling the compiler that i is defined globally (via the extern), but it also has file scope (via the static), so the compiler will generate an error. 
*/
