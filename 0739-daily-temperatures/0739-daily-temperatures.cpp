class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();
        stack<int> s;
        vector<int> ans(n, 0);
        for (int idx = n - 1; idx >= 0; idx--) {
            while (!s.empty() && temperatures[idx] >= temperatures[s.top()]) {
                s.pop();
            }
            if (!s.empty()) {
                ans[idx] = s.top() - idx;
            }
            s.push(idx);
        }
        return ans;
    }
};