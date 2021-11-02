class Solution {
public:
   
void swap(vector<int>& a,int first, int second)
{
    int temp = a[first];
    a[first] = a[second];
    a[second] = temp;
}
vector<int> findDuplicates(vector<int>& a) {    
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
            int correct = a[i]-1;
            if(a[i]==a[correct])
            {
                nums.push_back(a[i]);
            }
        }
    }
     return nums;
 } 
    
};
