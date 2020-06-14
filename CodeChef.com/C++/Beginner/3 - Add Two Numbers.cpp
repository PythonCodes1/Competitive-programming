/*
Shivam is the youngest programmer in the world, he is just 12 years old. 
Shivam is learning programming and today he is writing his first program.

Program is very simple, Given two integers A and B, write a program to add these two numbers.

Input
The first line contains an integer T, total number of test cases. 
Then follow T lines, each line contains two Integers A and B.

Output
Add A and B and display it.

https://www.codechef.com/problems/FLOW001
*/

#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		int ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}
