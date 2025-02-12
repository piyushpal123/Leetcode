#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dsum(int n) {
        int ans = 0;
        while (n) {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxi = -1;

        for (int num : nums) {
            int sum_digits = dsum(num);

            if (mp.count(sum_digits)) {
                maxi = max(maxi, mp[sum_digits] + num);
                mp[sum_digits] = max(mp[sum_digits], num);
            } else {
                mp[sum_digits] = num;
            }
        }

        return maxi;
    }
};
