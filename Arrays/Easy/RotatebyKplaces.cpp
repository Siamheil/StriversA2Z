void Reverse(vector<int>&nums,int start,int end){
    while(start<=end){
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }
}


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        Reverse(nums,0,n-1);
        Reverse(nums,0,k-1);
        Reverse(nums,k,n-1);

    }
};
