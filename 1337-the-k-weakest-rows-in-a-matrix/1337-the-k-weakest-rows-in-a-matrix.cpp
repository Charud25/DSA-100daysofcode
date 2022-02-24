class comp{
  public:
    bool operator()(const pair<int,int>&a,const pair<int,int>&b){
        if(a.first==b.first){
            return a.second > b.second;
        }
        return a.first > b.first;
    }
};
class Solution {
public:
vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        //Basically we need to implement min heap
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq;
        int row=mat.size(),col=mat[0].size();
        for(int i=0; i<row; i++){
            int sol=0;
            for(int j=0; j<col; j++){
                if(mat[i][j])
                    sol++;
            }
            pq.push({sol,i});
        }
        vector<int>res;
        for(int i=0; i<k && !pq.empty(); i++){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};