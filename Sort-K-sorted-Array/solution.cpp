#include <iostream>
#include <string>
#include <vector>
#include<queue>
using namespace std;
 
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

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        int data;
        cin>>data;
        arr[i]=data;
    }
    int k;
    cin>>k;
    sortK(arr, n, k);
    return 0;
}
