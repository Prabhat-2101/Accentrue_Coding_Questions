class Solution{
    public:
    void rotateArr(int arr[], int d, int n){
        int new_arr[n];
        d %= n;
        d = n-d;
        for(int i=0;i<n;i++){
            new_arr[(i+d)%n] = arr[i];
        }
        for(int i=0;i<n;i++){
            arr[i]= new_arr[i];
        }
    }
};
