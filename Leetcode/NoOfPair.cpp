#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countPairs(vector<int>& arr, vector<int>& brr) {
        long long ans = 0, i, j, c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;

        // Sort both arrays
        sort(brr.begin(), brr.end());
        sort(arr.begin(), arr.end());

        // Count occurrences of 0, 1, 2, 3, and 4 in brr
        for (i = 0; i < brr.size(); i++) {
            if (brr[i] == 0) c0++;
            else if (brr[i] == 1) c1++;
            else if (brr[i] == 2) c2++;
            else if (brr[i] == 3) c3++;
            else if (brr[i] == 4) c4++;
        }

        j = 0;
        for (i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                continue;
            } 
            else if (arr[i] == 1) {
                ans += c0;  // 1^0 > 0^1 is true
            } 
            else {
                ans += (c0 + c1); // x^y > y^x is always true for y = 0 or 1

                // Move `j` to find first `brr[j] > arr[i]`
                while (j < brr.size() && brr[j] <= arr[i]) {
                    j++;
                }

                ans += (brr.size() - j);  // Count numbers greater than arr[i]

                // Special case for arr[i] = 2
                if (arr[i] == 2) {
                    ans -= (c3 + c4);  // Remove cases (2,3) and (2,4)
                }
                // Special case for arr[i] = 3
                else if (arr[i] == 3) {
                    ans += c2;  // 3^2 > 2^3 is valid
                }
            }
        }
        return ans;
    }
};
