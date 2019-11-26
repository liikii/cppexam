/*
volatile
 Whereas the qualifier const tells the compiler “This never changes” (which allows the compiler to perform extra optimizations), the qualifier volatile tells the compiler “You never know when this will change,” and prevents the compiler from performing any optimizations based on the stability of that variable. Use this keyword when you read some value outside the control of your code, such as a register in a piece of communication hardware. A 

*/