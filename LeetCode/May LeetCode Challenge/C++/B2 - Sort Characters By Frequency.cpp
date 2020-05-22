class Solution {
public:
    static bool cmp(pair<char,int> &p1, pair<char, int> &p2){ 
        if (p1.second == p2.second) 
            return p1.first < p2.first; 
        return p1.second > p2.second;
    }
    string frequencySort(string s){
        map<char,int>freq;
        vector<pair<char,int>>v;
        string res="";
        for(auto &x:s)
            freq[x]++;
        for(auto &i : freq)
            v.push_back({i.first, i.second});
        sort(v.begin(),v.end(), cmp);
        for(auto &x:v){
            int k = x.second;
            while(k--){
                res+=x.first;
            }
        }   
    return res;
    }
};
