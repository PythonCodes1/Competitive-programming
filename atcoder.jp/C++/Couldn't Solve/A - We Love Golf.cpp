/*
Takahashi the Jumbo will practice golf.

His objective is to get a carry distance that is a multiple of K,
while he can only make a carry distance of between A and B (inclusive).

If he can achieve the objective, print OK; if he cannot, print NG

Sample Input 1 
7
500 600

Sample Output 1 
OK
Because 567 is a multiple of 7 and is between 500 and 600

https://atcoder.jp/contests/abc165/tasks/abc165_a
*/

#include <stdio.h>

int main(void) {
	int k, a, b;
	scanf("%d", &k);
	scanf("%d%d", &a, &b);
	int largest = (b / k) * k;
	if (a <= largest) {
		puts("OK");
	} else {
		puts("NG");
	}
return 0;
}
