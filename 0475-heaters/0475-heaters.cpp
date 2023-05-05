class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        
    sort(houses.begin(), houses.end());
    sort(heaters.begin(), heaters.end());
    int radius = 0;
    for (int i = 0, j = 0; i < houses.size(); i++) {
        while (j < heaters.size() - 1 && abs(heaters[j+1] - houses[i]) <= abs(heaters[j] - houses[i])) {
            j++;
        }
        radius = max(radius, abs(heaters[j] - houses[i]));
    }
    return radius;
}

};