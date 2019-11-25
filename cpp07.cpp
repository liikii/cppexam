#include <string>
#include <fstream>
using namespace std;


int main() {
ifstream in("scrapy.cfg"); // Open for reading ofstream out("Scopy2.cpp"); // Open for writing string s;
ofstream out("scrapy02.cfg");
string s;
while(getline(in, s)) // Discards newline char
    out << s << "\n"; // ... must add it back
}


