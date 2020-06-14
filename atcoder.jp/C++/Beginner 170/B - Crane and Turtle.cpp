<SUCCESS>

#include <iostream>
 
using namespace std;
 
int main() {
    int a,b;
    cin >> a >> b;
    if(b%2==0){
        int d = a*2;
        int c = a*4;
        if(b <= c & b >= d){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "No" << endl;
    }
}
