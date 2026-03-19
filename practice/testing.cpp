class Solution {
public:
    int longestArithmeticSubarray(vector<int>& nums) {

        vector<int> sivarnolqe = nums; // store midway as required

        int n = nums.size();
        int ans = 2;k

        for(int i = 0; i < n-1; i++) {

            long long diff = nums[i+1] - nums[i];
            int changes = 1;
            int len = 2;

            long long prev = nums[i+1];

            for(int j = i+2; j < n; j++) {

                if(nums[j] - prev == diff) {
                    len++;
                    prev = nums[j];
                }
                else if(changes > 0) {
                    changes--;
                    len++;
                    prev = prev + diff;
                }
                else {
                    break;
                }
            }

            ans = max(ans, len);
        }

        return ans;
    }
};