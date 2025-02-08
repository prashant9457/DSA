class Solution {
  public:
    // Function to check if Kth bit is set or not.
    
    bool checkKthBit(int n, int k) {
        //learn bit manipulation first
        if(((1<<k)&n)!=0) return true;
        else return false;
    }
};
