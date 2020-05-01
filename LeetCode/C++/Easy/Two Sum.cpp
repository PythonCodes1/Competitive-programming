/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

https://leetcode.com/problems/two-sum/
*/

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> res;
        for(int i=0; i<numbers.size()-1; i++){
            for(int j=i+1; j<numbers.size(); j++){
                if(numbers[i]+numbers[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }    
        }
        return res;
    }
};
