# Check if 2 integers are larger than/less than/equal to each other

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a<b){
            cout << "<" << endl;
        } else if(a>b){
            cout << ">" << endl;
        } else if(a==b){
            cout << "=" << endl;
        }
    }
    return 0;
}


/*
Test:
3
10 20
20 10
10 10

Answer:
<
>
=
*/
