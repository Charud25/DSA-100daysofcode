class Solution {
public:
 
    vector<int> searchRange(vector<int>& nums, int target) {
       
        vector<int> v(2,-1);
        int low = 0, high = nums.size() - 1;
        
        while(low<=high) {
            int mid = low + (high - low)/2;
            if(nums[mid] == target) {
                v[0] = mid;
                high = mid - 1;
            } else if(target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        low = 0, high = nums.size() -1;
           while(low<=high) {
            int mid = low + (high - low)/2;
            if(nums[mid] == target) {
                v[1] = mid;
                low = mid + 1;
            } else if(target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return v;
    }
};