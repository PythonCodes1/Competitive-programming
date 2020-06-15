// Check whether the input is acutally a triangle based on 3 angles

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b+c==180){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

/*
Test:
3 
40 40 100
45 45 90
180 1 1

Answer:
YES
YES
NO
*/
