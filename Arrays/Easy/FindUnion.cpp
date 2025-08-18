class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n = a.size(), m = b.size();
        int i = 0, j = 0;
        vector<int> Union;
        
        while (i < n && j < m) {
            if (a[i] <= b[j]) {
                if (Union.empty() || Union.back() != a[i])
                    Union.push_back(a[i]);
                i++;
            } else {
                if (Union.empty() || Union.back() != b[j])
                    Union.push_back(b[j]);
                j++;
            }
        }
        
        while (i < n) {
            if (Union.empty() || Union.back() != a[i])
                Union.push_back(a[i]);
            i++;
        }
        
        while (j < m) {
            if (Union.empty() || Union.back() != b[j])
                Union.push_back(b[j]);
            j++;
        }
        
        return Union;
    }
};
