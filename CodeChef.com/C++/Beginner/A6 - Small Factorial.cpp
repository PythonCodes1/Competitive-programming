// Find the factorial

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int answer = 1;
        
        // Find the factorial
        while(n > 0){
            answer *= n;
            n--;
        }
        cout << answer << endl;
    }
    return 0;
}

/*
Test:
3
3
4
5

Answer:
6
24
120
*/
