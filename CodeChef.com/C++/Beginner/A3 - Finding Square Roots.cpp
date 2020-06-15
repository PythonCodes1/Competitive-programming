// Find the ROUNDED square root of a number

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Take in the length of the testcases
    int n;
    cin >> n;
    // While loop that breaks once it reaches the last testcase
    while(n--){
        int t;
        cin >> t;
        int square_root = sqrt(t);
        cout << square_root << endl;
    }
    return 0;
}


/*
Test:
3
10
5
10000

Answer: 
3
2
100
*/
