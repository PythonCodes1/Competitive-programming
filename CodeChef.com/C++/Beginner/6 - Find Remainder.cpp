/*
Write a program to find the remainder when two given numbers are divided.

https://www.codechef.com/problems/FLOW002
*/

#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans
		int ans = a%b;
		printf("%d\n", ans);
	}

	return 0;
}