public class Solution {
    /**
     * @param k: An integer
     * @param n: An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    public int digitCounts(int k, int n) {
        // write your code here
    int count = 0;
         int base = 1;
        while (n / base >= 1) {
            
             int curBit = n % (base*10) / base;
             int higher = n / (base*10);
             int lower = n % base;
             if (curBit < k) {
                 count += higher * base;
             }
             else if (curBit == k) {
                 count += higher * base + lower + 1;
             }
             else if(higher!=0||k!=0){
                 count += (higher + 1) * base;
             }
            
             base *= 10;
         }
         if(k==0)
         {
             if(n<10&&n>=0)
             count+=1;
             
         }
         return count;
  }
}
