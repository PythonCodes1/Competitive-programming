// https://atcoder.jp/contests/abc167/tasks/abc167_a
#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    string a,b;
    cin >> a >> b;
    for(int i = 0;i < a.size();i++){
        if(a[i] != b[i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
