#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
#define rep(i, n) for(int i=0;i<(int)n;i++)
#define PI acos(-1)
#define fast_io ios_base::sync_with_stdio(false) ; cin.tie(0); cout.tie(0);
ll mod=1e9+7;
const int INF=1001001001;
 
vector<int> to[100005];
 
int main(){
    fast_io
    
    int n,m;
    cin>>n>>m;
    rep(i,m){
        int a, b;
        cin>>a>>b;
        a--;b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    queue<int> q;
    vector<int> dist(n, INF);
    vector<int> pre(n,-1);
    dist[0]=0;
    q.push(0);
 
    while(!q.empty()){
        int v=q.front();q.pop();
        for(int u : to[v]){
            if(dist[u] != INF)continue;
            dist[u] = dist[v]+1;
            pre[u] = v;
            q.push(u);
        }
    }
    cout<<"Yes"<<endl;
    rep(i,n){
        if(i==0) continue;
        int ans=pre[i];
        ++ans;
        cout<<ans<<endl;
    }
    return 0;
    
}
