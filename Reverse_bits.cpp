class Solution{
  public:
     uint32_t reverseBits(uint32_t n) {
       int rev=0;
       for(int i=31;i>=0;i--){
         rev = rev | ((n&1) << i);
         n = n >> 1;
       }
       retrun rev;
     }
}; 
