#include <iostream>
 
using namespace std;
 
int main() {
    int s, w;
    cin >> s >> w;
    if(s<=w){
        cout << "unsafe" << endl;
    } else {
        cout << "safe" << endl;
    }
}

//There are S sheep and W wolves.
//If the number of wolves is greater than or equal to that of sheep, the wolves will attack the sheep.
//If the wolves will attack the sheep, print unsafe; otherwise, print safe.
