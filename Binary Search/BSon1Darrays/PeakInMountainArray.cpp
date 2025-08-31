class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=1,end=n-2;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
            start = mid+1;
            else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1])
            end = mid-1;
            else
            return mid;

        }
        return -1;
    }
};
