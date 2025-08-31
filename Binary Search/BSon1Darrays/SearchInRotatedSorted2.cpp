class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0, end = n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) return true;

            if (arr[start] == arr[mid] && arr[mid] == arr[end]) {
                start++;
                end--;
            }
           
            else if (arr[start] <= arr[mid]) {
                if (arr[start] <= target && target < arr[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
            
            else {
                if (arr[mid] < target && target <= arr[end]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }

        return false;
    }
};
