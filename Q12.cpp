class Solution{
    public:
    bool is_complementary(string a, string b){
        int count[26] = {0};
        for(const char ch: a) count[ch-'A'] += 1;
        for(const char ch: b) count[ch-'A'] += 1;
        for(int i=0;i<26;i++) if(count[i] != 1) return false;
        return true;
    }
};
