class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int n = s.length();
        for(int i = 0 ; i<n ; i++) {
            if(s[i]!=s[n-1]) return false;
            n--;
        }
        return true;
    }
};
