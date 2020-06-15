// Find the middle number from a list of 3 ints

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        int a, b, c;
        cin >> a >> b >> c;
        // Find the max number
        int d = max(max(a,b),c);
        // Find the min number
        int e = min(min(a,b),c);
        // Add everything and then subtract the largest & smallest
        cout << (a + b + c) - d - e << endl;
    }
    return 0;
}

/*
Test: 
3 
120 11 400
10213 312 10
10 3 450

Answer:
120
312
10
*/
