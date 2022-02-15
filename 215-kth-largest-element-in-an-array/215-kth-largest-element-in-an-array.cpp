class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
//     sort(nums.begin(),nums.end());
//   return nums[nums.size()-k];
     
        priority_queue<int, vector<int>, greater<int>> mins;
        
        for(int i = 0 ; i< nums.size() ; i++)
        {
            mins.push(nums[i]);
            if(mins.size()>k)
                mins.pop();
        }
        return mins.top();
  }
        
};