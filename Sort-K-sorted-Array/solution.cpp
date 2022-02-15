void sortK(int arr[], int n, int k){

 // Creates a min heap
    priority_queue <int, vector<int>, greater<int> > pq;

    for(int i = 0 ; i<n ; i++)
    {
        pq.push(arr[i]) ; 

        if(pq.size() > k)
        {
            cout<<pq.top();
            pq.pop();
        }

    }
    while (pq.empty() == false)
    {
        cout << pq.top();
        pq.pop();
    }
    

}
