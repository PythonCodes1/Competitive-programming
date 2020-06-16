// See if the number is a prime number

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){  
	    int n;
	    int i;
	    cin>>n;
	    
	    for(i=2; i<n; i++){
	        if(n%i==0){
	            cout<<"no"<<"\n";
	            break;
	        }
	    
	        if(i==n){
	            cout<<"yes"<<"\n";
	        }
	    }
	}
	return 0;
}

/*
Test:
5
23
13
20
1000
99991

Answer:
yes
yes
no
no
yes
*/
