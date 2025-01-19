                                                              //Brut-force

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        
         
        for(int i = 0; i < n; i++){
            if(nums[i] <= 0){
                return false;
            }
                
        }
        return true;
    }
};


                                                                  //optimal
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxIndex = 0;
         
        for(int i = 0; i < n; i++){
            if(i > maxIndex){
                return false;
            }
            maxIndex = max(maxIndex , i + nums[i]);
                
        }
        return true;
    }
};
