class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int n = nums.size() ;
         int mini = nums.size() / 3 ;
         map <int, int > mp ; 
         vector <int> v ; 

         for (int i = 0 ; i < n ; i++ ){
            mp[nums[i]]++; 
            if(mp[nums[i]]  ==   mini + 1 ){
                v.push_back(nums[i]); 
            }
         }
         return v; 
    }
};