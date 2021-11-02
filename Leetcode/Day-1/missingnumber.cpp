class Solution {
public:
    
    
void swap(vector<int>& a,int first, int second)
{
    int temp = a[first];
    a[first] = a[second];
    a[second] = temp;
}

int missingNumber(vector<int>& a) {
        int i=0;
         while(i < a.size())
    {
            int correct= a[i];
            if(a[i]<a.size() && a[i] != a[correct] ) 
//iska matalab hai agar 4 pe aayega coreect ki value last mein toh a[4] toh missing toh usko swap na kro vo vaise hi bachi wali jaagah le lega jab saare sort ho jayega toh aage badho i.e. i++
    {
                swap(a,i,correct);
    }
            else
                        i++;
    }
        
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=i)
        {
            return i;
        }
    }
       return a.size();  // JAB 0,N KI ARAY MEIN N HI MISSING HO 
    }
};
