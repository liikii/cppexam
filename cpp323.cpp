/*
静态文件的处理方式， 和 extern的查找方式有冲突。 静态与动态的冲突。
//: C03:FileStatic.cpp // File scope demonstration. Compiling and  // linking this file with FileStatic2.cpp // will cause a linker error 
 
// File scope means only available in this file: static int fs;  
 
int main() {   fs = 1; } ///:~ 
 
Even though the variable fs is claimed to exist as an extern in the following file, the linker won’t find it because it has been declared static in FileStatic.cpp . 
//: C03:FileStatic2.cpp {O} // Trying to reference fs extern int fs; void func() {   fs = 100; } ///

*/