class Solution {
  public:
    vector<vector<int>> findTwoSumArray(vector<int>& arr, int x) {
        set<vector<int>> added;
        unordered_map<int,int> umap;
        for(const int it: arr){
            int target = x - it;
            if(umap[target] != 0 or target == it){
                added.insert({min(target,it),max(target,it)});
            }
            umap[it] += 1;
        }
        vector<vector<int>> res;
        for(const auto it: added) res.push_back(it);
        return res;
    }
};
