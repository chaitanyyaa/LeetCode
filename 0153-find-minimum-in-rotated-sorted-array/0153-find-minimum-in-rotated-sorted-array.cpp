class Solution {
public:
    int findMin(vector<int> &num) {
        int low = 0, high = num.size() - 1;
        
        while (low < high) {
            auto mid = low + (high - low) / 2;
            if (num[mid] < num[high])
               
                high = mid;
            else if (num[mid] > num[high])
                
                low = mid + 1;
        }

        return num[low];
    }
};