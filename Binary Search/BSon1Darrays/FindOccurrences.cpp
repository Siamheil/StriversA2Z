class Solution {
  public:
  
    int firstOccurrence(vector<int>&arr,int target){
        int n=arr.size();
        int start=0,end=n-1;
        int first=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==target){
                first=mid;
                end=mid-1;
            }else if(arr[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return first;
    }
    
    int lastOccurrence(vector<int>&arr,int target){
        int n=arr.size();
        int start=0,end=n-1;
        int last=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==target){
                last=mid;
                start=mid+1;
            }else if(arr[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return last;
    }
    
    int countFreq(vector<int>& arr, int target) {
        // code here
        int first = firstOccurrence(arr, target);
        if (first == -1) return 0;  
        int last = lastOccurrence(arr, target);
        return last - first + 1;
    }
};
