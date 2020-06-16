// See if the number is a palindrome

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, remainder, reversed_number=0;
        cin >> n;
        int copy=n;
        while(copy!=0){
            remainder = copy%10;
            reversed_number = reversed_number*10 + remainder;
            copy /= 10;
        }
        if(reversed_number==n){
            cout << "wins" << endl;
        } else {
            cout << "losses" << endl;
        }
    }
}


/*
Test:
3
331
666
343

Answer:
losses
wins
wins
*/
