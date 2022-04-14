class Solution {
public:
    void swap(int* a, int* b)
    {
    int temp = *a;
    *a = *b;
    *b = temp;
    }
 
    void reverseArray(vector<vector<int>>& arr)
    {
 
     // Traverse each row of arr[][]
        for (int i = 0; i < arr.size(); i++) {
 
        // Initialise start and end index
        int start = 0;
        int end = arr.size()-1;
 
        // Till start < end, swap the element
        // at start and end index
        while (start < end) {
 
            // Swap the element
            swap(&arr[i][start],
                 &arr[i][end]);
 
            // Increment start and decrement
            // end for next pair of swapping
            start++;
            end--;
        }
    }
    }
    void invertArray(vector<vector<int>>& arr)
    {
 
     // Traverse each row of arr[][]
        for (int i = 0; i < arr.size(); i++) {
            
            for(int j = 0 ; j < arr.size() ; j++)
            {
            if(arr[i][j] == 0)
                arr[i][j] = 1;
           else if(arr[i][j] == 1)
                arr[i][j] = 0;
            }
        }
    }  
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        reverseArray(image);
        invertArray(image);
        
        return image;
        
    }
};