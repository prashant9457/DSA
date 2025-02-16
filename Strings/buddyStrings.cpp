class Solution {
public:
    bool buddyStrings(string s, string goal) {
        //checking if both the strings are same if yes then is there any char occuring more than once
        if(s==goal) {
            int count[26] ;
            for(char e : s) {
                count[e-'a']++;
                if(count[e-'a']==2) return true;
            }
            return false;
        }
        if(s.length()!=goal.length()) return false;
        //now checking for misplace char;
        int index1 = -1;
        int index2 = -1;
        for(int i = 0; i<s.length(); i++) {
            if(s[i]!=goal[i]) {
                if(index1 == -1 ) index1 = i;
                else if(index2 == -1) index2 = i;
                else return false;
            }
        }

        if(index2==-1) return false;
        return (s[index1]==goal[index2] && s[index2]==goal[index1]);
        
        return false;
    }
};
