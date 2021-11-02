class Solution {
public:
        
void swap(vector<int>& a,int first, int second)
{
    int temp = a[first];
    a[first] = a[second];
    a[second] = temp;
}
vector<int> findDisappearedNumbers(vector<int>& a) {
    int i=0;
    vector<int> nums={};
    while(i < a.size())
{
        int correct = a[i]-1;
       if( a[i] != a[correct] ) 
       {
           swap(a,i,correct);
       }
       else
            i++;
}
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=i+1)
            {
                nums.push_back(i+1);
            }
        }
  return nums;
    }
};
