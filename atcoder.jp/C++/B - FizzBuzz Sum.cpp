/* 
Sample Input 1 
15
Sample Output 1 
60
The first 15 terms of the FizzBuzz sequence are:
1,2,Fizz,4,Buzz,Fizz,7,8,Fizz,Buzz,11,Fizz,13,14,FizzBuzz
Among them, numbers are 1,2,4,7,8,11,13,14, and the sum of them is 60.

https://atcoder.jp/contests/abc162/tasks/abc162_b
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    long long ans=0;
    for(int i=1;i<=n;i++){
        if(i%3!=0 && i%5!=0)ans+=i;
    }
    printf("%lld\n",ans);
}
