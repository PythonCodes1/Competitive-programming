<ANSWER>

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
   
    int n,x;
    cin>>x>>n;
    int a[n],i,num=0,min=INT_MAX;
    set<int> s;
    for(i=0;i<n;++i){ 
        cin>>a[i];
        s.insert(a[i]);
    }
    
    if(n==0)
        cout<<x;
    else{
        for(i=-100;i<=101;++i){
            if(s.count(i)==0){
                if(min>abs(x-i)){ 
                    min=abs(x-i);
                    num=i;
                 }
            }
        }
        cout<<num;
    }
	  return 0;
}
