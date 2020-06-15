// Provides the max of 2 numbers and the sum of them

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << max(a,b) << " " << a+b << endl;
    }
    return 0;
}

/*
Test:
1
19 17

Answer: 
19 36
*/
