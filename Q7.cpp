class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_prod = INT_MIN, prod = 1;
        for(const int num: nums){
            prod *= num;
            max_prod = max(max_prod,prod);
            if(prod == 0) prod = 1;
        }
        prod = 1;
        for(int i=nums.size()-1;i>=0;i--){
            prod *= nums[i];
            max_prod = max(max_prod,prod);
            if(prod == 0) prod = 1;
        }
        return max_prod;
    }
};
