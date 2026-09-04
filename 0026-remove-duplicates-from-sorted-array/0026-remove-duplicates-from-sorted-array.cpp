class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int low = 0;
        int high = 1;
        int n = arr.size();
        int flag = 1 ;

        // if (n == 0) {
        //     return 0;
        // }

        while (high < n) {
            if (arr[high] == arr[high - 1]) {
                high++;
                continue;
            }

            arr[low + 1] = arr[high];
            low++;
            flag++ ;
            high++;
        }

        return flag;
    }
};