/*
You can also define variables inside the control expressions of for loops and while loops, 
inside the conditional of an if statement, and inside the selector statement of a switch. 
Here’s an example showing on-the-fly variable definitions:
*/

// On-the-fly variable definitions
#include <iostream>
using namespace std;
int main() {
    //..
    { // Begin a new scope
        int q = 0; // C requires definitions here
        //..
        // Define at point of use:
        for(int i = 0; i < 100; i++) {
            q++; // q comes from a larger scope
            // Definition at the end of the scope:
            int p = 12;
        }
        int p=1; //Adifferentp
    } // End scope containing q & outer p 
    cout << "Type characters:" << endl; 
    while(char c = cin.get() != 'q') {
        cout << c << " wasn't it" << endl;
        if(char x = c == 'a' || c == 'b')
          cout << "You typed a or b" << endl;
        else
          cout << "You typed " << x << endl;
    }
  cout << "Type A, B, or C" << endl;
    switch(int i = cin.get()) {
        case 'A': cout << "Snap" << endl; break;
        case 'B': cout << "Crackle" << endl; break;
        case 'C': cout << "Pop" << endl; break;
        default: cout << "Not A, B or C!" << endl;
    }
} ///:
