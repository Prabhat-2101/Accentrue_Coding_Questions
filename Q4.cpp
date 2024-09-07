class Solution{
    public:
    vector<string> find_tuple(vector<vector<string>> records,string key, int times){
        for(const auto record: records){
            int count = 0;
            for(const string entry: record){
                if(entry == key) count += 1;
            }
            if(count == timse) {
                return record;
            }
        }
        return {};
    }
}
