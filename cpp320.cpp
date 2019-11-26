/*

Scoping rules tell you where a variable is valid, where it is created, 
and where it gets destroyed (i.e., goes out of scope). 
The scope of a variable extends from the point where it is defined 
to the first closing brace that matches the closest opening brace before the 
variable was defined. That is, a scope is defined by its “nearest” set of braces. 
To illustrate:
*/
// How variables are scoped
int main() {
    int scp1;
    // scp1 visible here
    {
        // scp1 still visible here
        //.....
           int scp2;
           // scp2 visible here
           //.....
           {
             // scp1 & scp2 still visible here
             //..
             int scp3;
             // scp1, scp2 & scp3 visible here
             // ...
           } // <-- scp3 destroyed here
           // scp3 not available here
           // scp1 & scp2 still visible here
           // ...
     } // <-- scp2 destroyed here
     // scp3 & scp2 not available here
     // scp1 still visible here
     //..
} // <-- scp1 destroyed here
///:~
