class Solution {
public:
    void rotate ( string &s, int n ) {
        int end = n;
        char last = s[n];
        while(end>0) {
            s[end]=s[end-1];
            end--;
        }
        s[0]=last; 
    }

    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        int n = s.length()-1;
        int st = 0;

        while(st<n)
        {   
            rotate(s, n);
            if(s==goal) return true;
            st++;

        }
        return false;
    }
};
