class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int n =  nums.size();
         map <int,int> mp; 
         vector<int> ans ; 
         for (int i = 0 ; i < n ; i++ ){
            mp[nums[i]]++; 
         }
         int el1 ; 
        //  int el2 ; 
         for (auto it : mp ){
            if (it.second > n / 3 ){
               el1 = it.first ;
               ans.push_back(el1); 
            }
         }
        //  for (auto it : mp ){
        //     // if (it.first == el1 ){
        //     //     continue ; 
        //     // }
        //     if (it.second > n / 3 && it.first != el1 ){
        //         el2 = it.first ;
        //         ans.push_back(el2);  
        //     }
        //  }
        return ans;
    }
};