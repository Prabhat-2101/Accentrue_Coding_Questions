class Solution{
    public:
    string form_number(vector<int> nums){
        sort(nums.begin(),nums.end(),[](int &a,int &b){
            int dig1 = a / pow(10,floor(log10(a)));
            int dig2 = b / pow(10,floor(log10(b)));
            if(dig1 == dig2) return a > b;
            return dig1 > dig2;
        });
        string res = "";
        for(const int it: nums){
            res += to_string(it);
        }
        return res;
    }
};
