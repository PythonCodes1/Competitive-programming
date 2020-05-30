class Solution {
public:
    int setBitCount(int num){
        int count = 0;
        while(num){
            count+=num&1;
            num>>=1;
        }
    return count;
    }
    
    vector<int> countBits(int num) {
        vector<int>result;
        for(int i=0;i<=num;i++){
            result.push_back(setBitCount(i));
        }
    return result;
    }
};
