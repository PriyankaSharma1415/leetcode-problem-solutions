// LeetCode 1732 - Find the Highest Altitude
// Difficulty: Easy
// Language: C++
// Link: https://leetcode.com/problems/find-the-highest-altitude/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>add(n);
        int sum=0,maxi=0;
        for(int i=0;i<n;i++){
            sum+=gain[i];
            add[i]=sum;
            maxi = max(maxi, add[i]);
        }
        return maxi;
    }
};
