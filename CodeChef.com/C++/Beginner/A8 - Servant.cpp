// Check if the input is less than 10

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        if(t<10){
            cout << "What an obedient servant you are!" << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}

/*
Test:
3 
1
12
-5

Answer:
What an obedient servant you are!
-1
What an obedient servant you are!
*/
