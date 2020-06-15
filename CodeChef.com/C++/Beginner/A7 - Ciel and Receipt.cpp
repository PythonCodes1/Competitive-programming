#define ll long long int
#include <math.h>
#include <iostream>
using namespace std;

int main() {
	ll t;
	cin >> t;
	
	while(t--){
	  ll p;
	  cin >> p;
	  ll count = 0;
	  int i = 11;
	  while(p>0){
	      if(pow(2,i) > p) {
	        i = i-1;
	      }else{
	          p=p-pow(2,i);
	          count++;
	      }
	  }
	  cout << count << "\n";
	}
	return 0;
}


/*
Test:
4
10
256
255
4096

Answer:
2
1
8
2
/*
