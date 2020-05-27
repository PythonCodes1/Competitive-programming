class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        unordered_map<int,int>map;
        map.insert({0,-1});
        
        int sum=0;
        int maxlen=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                sum-=1;
            else
                sum+=1;
            
            auto it = map.find(sum); 
            if(it==map.end())
                map.insert({sum,i});
            else
            {
                maxlen = max(maxlen, i-(it->second));
            }
       }
    return maxlen;
    }
};
