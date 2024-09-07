class Solution{
    public:
    void print_remainder(int num){
        int last = num % 10;
        num /= 10;
        if(last == 0) return;
        while(num>0){
            int rem = num%last;
            num /= 10;
            cout<<rem<<endl;
        }
    }
};
