class Solution{
    string getCountString(string curr){
        curr = curr + '.';
        string new_str = ""; int count = 1;
        for(int i=0;i<curr.length()-1;i++){
            if(curr[i] == curr[i+1]) {
                count += 1;
            }else{
                new_str += to_string(count);
                new_str += curr[i];
                count = 1;
            }
        }
        return new_str;
    }
  public:
    string lookandsay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string curr = "11";
        for(int i=3;i<=n;i++){
            curr = getCountString(curr);
        }
        return curr;
    }   
};
