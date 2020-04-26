// A company has N members, who are assigned ID numbers 1 , . . . , N .
// Every member, except the member numbered 1 , has exactly one immediate boss with a smaller ID number. 
// When a person X is the immediate boss of a person Y , 
// the person Y is said to be an immediate subordinate of the person X . 
// You are given the information that the immediate boss of the member numbered i is the member numbered A i. 
// For each member, find how many immediate subordinates it has.

#include <iostream>
#include <cmath>

using namespace std;

int a[200010];
int ans[200010];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=2;i<=n;i++)
        ans[a[i]]++;
    for(int i=1;i<=n;i++)
        printf("%d\n",ans[i]);
}
