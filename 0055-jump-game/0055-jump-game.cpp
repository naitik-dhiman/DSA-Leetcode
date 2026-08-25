class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();

        int lastidx = n - 1;
        int distance;

        for (int i = lastidx - 1; i >= 0; i--) {

            distance = lastidx - i;

            if (nums[i] >= distance) {
                lastidx = i;
            }
        }

        return lastidx == 0;
    }
};