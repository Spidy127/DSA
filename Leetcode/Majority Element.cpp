class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0 , majorityElement = 0;

        for(int i = 0; i < n; i++){
            if( cnt == 0){
                majorityElement = nums[i];
            }
             if(majorityElement == nums[i]) {
                cnt++;
            }
            else {
                cnt--;
            }
        }
          return majorityElement;
    }
