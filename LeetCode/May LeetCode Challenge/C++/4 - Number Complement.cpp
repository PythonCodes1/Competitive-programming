/*

https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/
*/
class Solution {
public:
    int findComplement(int num) {
        int n=(log(num)/log(2))+1;
        int val=0;
        for(int i=0;i<n;i++){
            if(!(num&(1<<i)))
                val+=(1<<i);
        }
        return val;
    }
};
