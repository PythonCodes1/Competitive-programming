/*
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
3 
12345
31203
2123

Output
15
9
8

https://www.codechef.com/problems/FLOW006
*/

#include<stdio.h>
main(){
    int i;
   	scanf("%d",&i);
   	while(i--){
   		int n, answer = 0; 
   		scanf("%d",&n);
   		
   		while(n!=0){
	   		sum+=n%10; n/=10;
   		}
    	printf("%d\n",sum);
    }
}
