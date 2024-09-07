class Solution{
    public:
    vector<float> find_two_batsman(vector<float> rates){
        sort(rates.begin(),rates.end());
        float min_rate = INT_MAX; 
        int min_idx = -1;
        for(int i=0;i<rates.size()-1;i++){
            float diff = rates[i+1] - rates[i];
            if(diff < min_rate){
                min_rate = diff;
                min_idx = i;
            }
        }
        return {rates[min_idx],rates[min_idx+1]};
    }
};
