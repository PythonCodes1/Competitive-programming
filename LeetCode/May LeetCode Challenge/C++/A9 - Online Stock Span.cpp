class StockSpanner {
    stack<pair<int, int>>stk;
    int count;
public:
    StockSpanner() {
        count = 0;
    }
    
    int next(int price) {
        count++;
        
        int res = 0;
        if (stk.empty()) {
            stk.push(make_pair(price, count));
            res = 1;
        } else {
            while (!stk.empty() && stk.top().first <= price) {
                stk.pop();
            }
          
            res = !stk.empty() ? count - stk.top().second : count;
            stk.push(make_pair(price, count));
        }
        
        return res;
    }
};
