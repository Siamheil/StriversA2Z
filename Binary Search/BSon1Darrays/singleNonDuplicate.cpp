class Solution {
  public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n-1;

        while(low < high){
            int mid = low + (high-low)/2;

           
            if(mid % 2 == 1) mid--;

            if(arr[mid] == arr[mid+1]){
                
                low = mid + 2;
            } else {
                
                high = mid;
            }
        }
        return arr[low];
    }
};
