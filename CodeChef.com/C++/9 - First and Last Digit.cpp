#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Get the first number to find the length of the list
	int t;
	scanf("%d",&t);
	// Make a while loop to loop through the list until the end
	while(t--)
	{
	    // Get the specific int from the list
	    int n;
	    scanf("%d",&n);
	    
	    // Get the first number to the right
	    int sum=n%10;
	    
	    // Get the next number to the left
	    // n divided by the power of 10^log10(n)
	    int Fddd=(int)n/pow(10,(int)log10(n));
	    
	    // Add up the 2 ints
	    printf("%d\n",sum+Fddd);
	}
	return 0;
}
