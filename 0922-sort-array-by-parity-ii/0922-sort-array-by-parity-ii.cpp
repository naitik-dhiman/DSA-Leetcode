class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size() ;
       int oddidx =  1 ;
       int evenidx = 0 ;
       vector <int >  ans(n,0) ; 
       for (int i = 0 ; i < n ;i++){
        if (nums [i] % 2 == 0 ){
            ans[evenidx] = nums[i];
            evenidx += 2 ; 
        }
        else {
            ans[oddidx] =  nums [i];
            oddidx+= 2 ; 
        }
       
       }
      return ans ;
    }
};