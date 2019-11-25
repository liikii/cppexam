//: C02:FillString.cpp
// Read an entire file into a single string
 #include <string>
 #include <iostream>
 #include <fstream>
 using namespace std;

 
 int main() {
   ifstream in("scrapy02.cfg");
   string s, line;
   while(getline(in, line))
     s += line + "\n";
   cout << s;
} 