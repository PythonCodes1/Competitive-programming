// Reverse the number

#include <iostream>
using namespace std;

int main() {
    // Get the length of the testcases
    int t;
    cin >> t;
    // While loop to scan each testcase
    while(t--){
        int n, remainder, reversed_number = 0;
        cin >> n;
        // While loop to go through each digit
        while(n != 0){
            // Get the digit to the rightmost and then add it to the reversed number
            remainder = n%10;
            reversed_number = reversed_number*10 + remainder;
            n /= 10;
        }
        cout << reversed_number << endl;
    }
    return 0;
}

/*
Test Case: 
4
12345
31203
2123
2300

Answer: 
54321
30213
3212
32
*/
