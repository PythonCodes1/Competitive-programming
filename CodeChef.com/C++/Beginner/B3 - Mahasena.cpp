#include <iostream>

using namespace std;

int main() {
    int n;
    int odd=0, even=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if(a%2==0){
            even++;
        } else {
            odd++;
        }
    }
    if(even > odd){
        cout << "READY FOR BATTLE" << endl;
    } else {
        cout << "NOT READY" << endl;
    }
}

/*
Test:
4
11 12 13 14

Answer:
NOT READY

Test:
5
1 2 3 4 5

Answer:
NOT READY
*/
