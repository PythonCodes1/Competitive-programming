#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    // To speed up the cout/cin functions
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Input #
    ll n;
    cin >> n;
    
    vector<char> v;
    vector<char> vc = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    ll r = (n-1) / 26;
    ll q = (n-1) % 26;
    
    v.push_back(vc.at(q));
    
    while (r > 0){
    q = (r-1) % 26;
    r = (r-1) / 26;
    v.push_back(vc.at(q));
    }
    reverse(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++){
    cout << v.at(i);
    }
    
    cout << endl;
    return 0;
}
