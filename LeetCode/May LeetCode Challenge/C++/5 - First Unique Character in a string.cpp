// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/

class Solution {
public:
    // Find the count of each character and find the first number that is unique and return the index
    int firstUniqChar(string s) {
        int count[26] = {0};
        
        for (char c: s)
            // Creating an index
            count[c-'a'] += 1;
        
        for(int i = 0; i<s.length(); ++i)
            if(count[s[i] - 'a'] ==1) return i;
        
        return -1;
    }
};
