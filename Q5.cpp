class Solution{
    public:
    void insert_element(vector<int> nums,int key){
        int i = 0;
        for(;i<nums.size();i++){
            if(nums[i]>=key) break;
        }
        nums.insert(i,key);
    }
}
