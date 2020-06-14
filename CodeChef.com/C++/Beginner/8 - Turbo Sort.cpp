/*
Given the list of numbers, you are to sort them in non decreasing order.

https://www.codechef.com/problems/TSORT
*/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int A[t];
    int x = 0;
    
    for(int i = 0; i < t; i++){
        cin >> x;
        A[i] = x;
    }
    sort(A,A+t);
    for(int i = 0; i < t; i++){
        cout << A[i] << endl;
        
    }
    return 0;
}
