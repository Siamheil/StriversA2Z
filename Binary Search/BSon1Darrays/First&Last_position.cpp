class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int start=0,end=n-1;
        int first=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==x){
                first=mid;
                end=mid-1;
            }else if(arr[mid]<x){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        
        start=0,end=n-1;
        int last=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==x){
                last=mid;
                start=mid+1;
            }else if(arr[mid]<x){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return {first,last};
    }
};
