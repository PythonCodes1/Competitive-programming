/*
You are asked to calculate factorials of some small positive integers.

https://www.codechef.com/problems/FCTRL2
*/

#include<boost/multiprecision/cpp_int.hpp>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using namespace boost::multiprecision;

int main() {
    int t,i;
    cpp_int n,fact=1;
    cin>>t;
    while(t--){
        cin>>n;

        for(i=0;i<n;i++){
            fact=fact*(i+1);
        }
    
        cout<<fact<<endl;
        fact=1;
    }
	return 0;
}
