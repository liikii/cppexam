/*
477

This comes in useful when you have global variables. You declare the existence of global variables in a header, so that each source file that includes the header knows about it, but you only need to “define” it once in one of your source files.

To clarify, using extern int x; tells the compiler that an object of type int called x exists somewhere. It's not the compilers job to know where it exists, it just needs to know the type and name so it knows how to use it. Once all of the source files have been compiled, the linker will resolve all of the references of x to the one definition that it finds in one of the compiled source files. For it to work, the definition of the x variable needs to have what's called “external linkage”, which basically means that it needs to be declared outside of a function (at what's usually called “the file scope”) and without the static keyword.

header:
#ifndef HEADER_H
#define HEADER_H

// any source file that includes this will be able to use "global_x"
extern int global_x;

void print_global_x();

#endif
source 1:
#include "header.h"

// it needs to be defined somewhere
int global_x;

int main()
{
    //set global_x here:
    global_x = 5;

    print_global_x();
}
source 2:
#include <iostream>
#include "header.h"

void print_global_x()
{
    //print global_x here:
    std::cout << global_x << std::endl;
}

*/