class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int n=arr.size();
        int start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==key) return mid;
            
            //left sorted
            if(arr[start]<=arr[mid]){
                if(arr[start]<=key && key<=arr[mid]){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }
            //right sorted
            else{
                if(arr[mid]<=key && key<=arr[end]){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};
