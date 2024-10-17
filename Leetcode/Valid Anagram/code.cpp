/*brute force methode using sorting TM- O(NlogN)*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t){
            return true;
        } else{
            return false;
        }
    }
};


/* BETTER Approach using counting */
    
    

