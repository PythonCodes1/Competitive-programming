/*
Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.
*/

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int answer = 0;
        
        while(n!=0){
            if(n>=100){
                answer++;
                n -= 100;
            }
            else if(n>=50){
                answer++;
                n -= 50;
            }
            else if(n>=10){
                answer++;
                n -= 10;
            }
            else if(n>=5){
                answer++;
                n -= 5;
            }
            else if(n>=2){
                answer++;
                n -= 2;
            }
            else if(n>=1){
                answer++;
                n -= 1;
            }
        }
        
        cout << answer << endl;
    }
    return 0;
}

/*
Test:
3 
1200
500
242

Answer:
12
5
7

*/
