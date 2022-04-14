class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        vector<int>v(26,0);
        
        for(int i=0;i<sentence.size();i++)
        {
            
            int ascii = sentence[i]-'a';
             v[ascii]=1;
            
        }
        for(auto it:v){
            
            if(it==0){
                return false;
            }
        }
        return true;
    }
};


//In the first stage, set the vector of size 26 (number of alphabets) to 0.
//Then, iterate the string. According to the ascii value (downgraded to 0–25), I have changed the corresponding vector value to 1.
//Finally, in the for-each loop, if a zero occurs (which means one or more alphabets aren't present in the given string), it means the loop returns false; otherwise, it returns true.
