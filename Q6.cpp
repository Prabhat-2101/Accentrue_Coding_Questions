class Solution{
    public:
    int lenOfLongSubarr(int nums[],  int n, int k) { 
        int max_len = 0,sum=0;
        unordered_map<long long,int> umap;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum==k)
                max_len = i+1;
            if(umap.find(sum) == umap.end())
                umap[sum] = i;
            if(umap.find(sum-k)!= umap.end())
                max_len = max(max_len,i-umap[sum-k]);
        }
        return max_len;
    } 

};
