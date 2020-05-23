class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& left, vector<vector<int>>& right) {
        if(left.size() == 0)return left;
        if(right.size() == 0) return right;
        vector<vector<int>> vec;

        int l = 0;  int leftSize  = left.size();
        int r = 0;  int rightSize = right.size();

         while(l<leftSize && r<rightSize){
            int leftFirst   = left[l][0];
            int leftSecond  = left[l][1];
            int rightFirst  = right[r][0];
            int rightSecond = right[r][1];
            int maxFirst = max(rightFirst, leftFirst);
            int minSecond = min(leftSecond,rightSecond);
            if(maxFirst <= minSecond)
                vec.push_back({maxFirst, minSecond});
            
            if(leftSecond < rightSecond)
                l++;
            else if (leftSecond == rightSecond){
                r++; l++;
            } else
                r++;
        }

    return vec;
    }
};
