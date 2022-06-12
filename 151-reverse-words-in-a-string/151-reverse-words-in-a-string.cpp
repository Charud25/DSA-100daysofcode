/* Brute Force */
class solution {
public:
    string reverseWords(string s) {
        
        if(s.size() == 0) 
            return s;
        
        stack<string> stack;
        string result;
        
        for(int i=0; i<s.size(); i++) 
        {
            string word;
            if(s[i]==' ') 
                continue; //skip spaces
            while(i<s.size() && s[i]!=' ' ) 
            {                               //store continuous letters into word
                word += s[i]; i++;
            }
            stack.push(word); //push word to the stack
        }
        while(!stack.empty()) {
            
            result += stack.top(); 
            stack.pop();
            if(!stack.empty()) 
                result += " ";
        }
        return result;
    }
        
};

/*  Optimal -> 
    Time Complexity  -> O(n)
    Space Complexity -> O(1)    */
class Solution {
public:
    string reverseWords(string s) {
        string result;
        int i = 0, n = s.length();
        
        while(i < n){
			//to detect spaces and ignore them
            while(i < n && s[i] == ' ') i++;
            
            if(i >= n) break;
            
            int j = i;
            
			//to detect characters and break when we detect any space
            while(j < n && s[j] != ' ') j++;
            
			//to take out the first word
            string sub = s.substr(i, j-i);
            
            if(result.length() == 0) result = sub;
            
            else result = sub + " " + result;
            
            i = j+1;
        }
        return result;
    }
};