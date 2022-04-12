class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
            
        int res=0;
        //2-D array with all zeroes 
        vector<vector<int>> v(m,vector<int>(n,0));
        for(int i=0;i<indices.size();i++)
        {
            int r=indices[i][0];
            int c=indices[i][1];
            
            //Increment all the cells on row r
            for(int j=0;j<n;j++)
            {
                v[r][j]++;
            }
            
            //Increment all the cells on column c
            for(int j=0;j<m;j++)
            {
                v[j][c]++;
            }
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]&1)
                {
                    res++;
                }
            }
        }
        return res;
    }
};