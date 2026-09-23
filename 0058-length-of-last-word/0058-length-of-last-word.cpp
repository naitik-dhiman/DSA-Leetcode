class Solution { 
public: 
    int lengthOfLastWord(string str) { 
        int curr = str.size() - 1; 
        int l = 0; 

        while (str[curr] == ' ') { 
            curr--; 
        } 

        while (curr >= 0 && str[curr] != ' ') { 
            l++; 
            curr--; 
        } 

        return l; 
    } 
};