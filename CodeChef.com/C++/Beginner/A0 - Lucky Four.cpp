// See how many 4's there are in a number

#include <iostream>
using namespace std;

int main() {
    // Get the length of the list
    int t;
    cin >> t;
    // Create a while loop that scans the list
    while(t--){
        // Going through each list
        int count=0, a;
        cin >> a;
        // Another while loop to go through each digit to see if it's a 4
        while(a>1){
            int a1;
            a1 = a%10;
            if(a1==4){
                count++;
            }
            a /= 10;
        }
        cout << count << endl;
    }
    return 0;
}
