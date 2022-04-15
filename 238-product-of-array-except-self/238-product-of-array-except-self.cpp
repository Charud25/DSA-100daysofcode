class Solution {
public:
    int pro(vector<int>& nums, int k){
        int h = nums.size();
        int a = 1;
        for(int i = 0; i < h; i++){
            if(i != k){
                a *= nums[i];
            }
        }
        return a;
    }
    
    vector<int> productExceptSelf(vector<int>& nums) {
        bool flag = false;
        vector<int> ans;
        int i = 0;
        int h = nums.size();
        int p = 1;
        while(i < h){
            if(nums[i] == 0)
                flag = true;
            p *= nums[i];
            i++;
        }
        if(flag){
            for(int j = 0; j < nums.size(); j++){
                int v;
                if(nums[j] == 0)
                    v = pro(nums, j);
                else
                    v = 0;
                ans.push_back(v);
            }
        }
        else{
            for(int j = 0; j < nums.size(); j++){
                int v = p / nums[j];
                ans.push_back(v);
            }
        }
        return ans;
    }

};