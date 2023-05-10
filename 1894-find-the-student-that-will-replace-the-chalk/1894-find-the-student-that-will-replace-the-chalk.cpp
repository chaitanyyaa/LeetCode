class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        k = (int) (k % sum(chalk));
        int currentIndex = 0;

        while (chalk[currentIndex] <= k) {
            k -= chalk[currentIndex++];
        }
        return currentIndex;
    }
    
private: 
    long sum(vector<int>& chalk) {
        long sum = 0;
        for (int i : chalk) {
            sum += i;
        }
        return sum;
    }
};