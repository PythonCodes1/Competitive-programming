/*
Takahashi has a deposit of 100 yen (the currency of Japan) in AtCoder Bank.

The bank pays an annual interest rate of 1 % compounded annually. 
(A fraction of less than one yen is discarded.)

Assuming that nothing other than the interest affects Takahashi's balance, 
in how many years does the balance reach X yen or above for the first time?
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	long long X;
	cin >> X;
	long long P = 100, step = 0;

	while(P < X){
		P += P / 100;
		step++;
	}
	cout << step << endl;
	return 0;
}
