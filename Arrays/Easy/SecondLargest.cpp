class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int largest=arr[0],seclargest=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                seclargest=largest;
                largest=arr[i];
            }else if(arr[i]!=largest && arr[i]>seclargest)
            seclargest=arr[i];
        }
        return seclargest;
    }
};
