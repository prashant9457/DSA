class Solution {
  public:
    // Function returns the second
    // largest elements
     int getSecondLargest(vector<int> &arr) {
       int min=INT_MIN,max=INT_MIN;
       
       for(int val: arr) {
           if(val>max) {
                min=max;
                max=val;

           }
           if(val>min&&val<max) min=val;
          
       }
       
       if(min==INT_MIN) return -1;
       
       return min;
   }

};
