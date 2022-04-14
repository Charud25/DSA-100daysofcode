class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        
        int m=a.size();
        int n=a[0].size();       
        
        bool isColumn0=false;
        
        for(int i=0;i<m;i++){
            
            if(a[i][0]==0)
                isColumn0=true;
            
            for(int j=1;j<n;j++)
            {
                if(a[i][j]==0)
                {
                    a[i][0]=0;
                    a[0][j]=0;
                }
            }
        }  
        //travel from last to start
        for(int i=m-1;i>=0;i--)
        {            
            for(int j=n-1;j>=1;j--)
            {    
                if(a[i][0]==0 ||a[0][j]==0)
                    a[i][j]=0;
            }
            if(isColumn0)
                a[i][0]=0;
         } 
      }
};