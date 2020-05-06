// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
        for(int n : nums){
            if(counts.find(n) == counts.end())
                counts.insert({n,1});
            else
                counts[n] += 1;
            if(counts[n] > nums.size()/2)
                return n;
        }
        return -1;
    }
};
