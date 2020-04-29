/*
Given is a three-digit integer N. Does N contain the digit 7?

If so, print Yes; otherwise, print No.

https://atcoder.jp/contests/abc162/tasks/abc162_a
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char s[4];
    scanf("%s",s);
    if(s[0]=='7'||s[1]=='7'||s[2]=='7')
        puts("Yes");
    else puts("No");
}
