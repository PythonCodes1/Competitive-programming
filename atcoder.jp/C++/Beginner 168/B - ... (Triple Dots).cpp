#include <bits/stdc++.h>
 
using namespace std;
 
int k;
string s;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin >> k >> s;
 
    for(int i = 0; i < min(k, (int)s.size()); i++)
        cout << s[i];
    if(k < (int)s.size())
        cout << "...";
 
    return 0;
}
