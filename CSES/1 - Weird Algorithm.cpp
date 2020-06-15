#include <iostream>
using namespace std;

int main(){
	long long int t;
	cin >> t;
	cout << t << " ";
	while(t!=1){
		if(t%2==0){
			t /= 2;
		} 
		else {
			t = 3*t+1;
		}
		cout << t << " ";
	}
	return 0;
}

/*
Test:
3

Answer:
3 10 5 16 8 4 2 1
*/
