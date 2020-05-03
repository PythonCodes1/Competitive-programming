/*
AtCoder Inc. holds a contest every Saturday.

There are two types of contests called ABC and ARC, and just one of them is held at a time.

The company holds these two types of contests alternately: an ARC follows an ABC and vice versa.

Given a string S representing the type of the contest held last week, print the string representing the type of the contest held this week.
*/

#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string n;
    cin >> n;
    if (n == "ABC"){
        cout << "ARC" << endl;
    } else if(n == "ARC"){
        cout << "ABC" << endl;
    }
}
