class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        int first=-1,last=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==key){
                if(first == -1) first = i;
                last = i;
            }
        }
        return {first,last};
    }
};
