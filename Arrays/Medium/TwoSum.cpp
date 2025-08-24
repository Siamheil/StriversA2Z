class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int start=0,end=n-1;
        while(start<end){
            int sum=arr[start]+arr[end];
            if(sum==target){
                return true;
            }else if(sum<target){
                start++;
            }else{
                end--;
            }
        }
        return false;
    }
};
