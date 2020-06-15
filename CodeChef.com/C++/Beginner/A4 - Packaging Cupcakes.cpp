#include <iostream>
using namespace std;

int main() {
  // Take in the length of the testcases
	int t;
	long long n;
	cin >> t;
	// While loop
	while(t--){
	    cin >> n;
	    // (cupcakes/2)+1
	    cout << (n/2)+1 << endl;
	}
	return 0;
}

/*
Test: 
2
2
5

Answer:
2
3
*/
