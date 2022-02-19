class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        
        unordered_map<int,int>mp;
        
        //min heap banega jo kam freq wale log unko hatana hai
        
        priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>MIN;
        vector<int> a;
    int i,n=v.size();
    for(i=0;i<n;i++)
    {
         mp[v[i]]++; //freq with its elements ka pair in map
    }
    for(auto i=mp.begin();i!=mp.end();i++) //traversal in a map 
    {
        MIN.push({i->second,i->first});  //pushing freq first and then ele
        if(MIN.size()>k)
            MIN.pop();
    }
    while(MIN.size()>0)
    {
         a.push_back(MIN.top().second);
         MIN.pop();
    }
        return a ;
    }
};