// https://atcoder.jp/contests/abc167/tasks/abc167_b
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main(){
    ll a,b,c,k,ans=0;
    cin>>a>>b>>c>>k;
    if(a>k)ans=k;
    else if(a+b>=k)ans=a;
    else{
        ll minus=k-(a+b);
        ans=a-minus;
    }
    cout<<ans<<endl;
    return 0;
}
