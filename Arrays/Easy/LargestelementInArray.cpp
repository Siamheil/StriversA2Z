class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max=INT_MIN;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
};
