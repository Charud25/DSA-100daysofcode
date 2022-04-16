class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
    vector<int>v;
        
    if(k>nums.size())
        k=k%nums.size();
        
    int n=nums.size()-k;
    for(int i=n;i<nums.size();i++)
    {
        v.push_back(nums[i]);
    }
    for(int i=0;i<n;i++)
    {
        v.push_back(nums[i]);
    }
    nums.clear();
    nums=v;
    }
};