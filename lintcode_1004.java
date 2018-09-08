public class Solution {
    /**
     * @param n: An integer
     * @return: the nth prime number as description.
     */
    public int nthUglyNumber(int n) {
        // write your code here
        int result=0,r;
        int i=3,j=2,k=2;
        int x=3,y=2,z=2,l=-2;
        int[] res=new int[10005];
        for( r=0;r<6;r++)
        {
            res[r]=r;
        }
        //if(n<=5) result=res[n];
        while(i+j+k+l<n)
        {
            //result=min(2*x,3*y,z*1);
            if(2*x<=3*y&&2*x<=z*5)
            {
                if(2*x==3*y) {y=res[++j];l--;}
                if(2*x==5*z) {z=res[++k];l--;}
                res[r++]=2*x;x=res[++i];
            }
            else if(3*y<=5*z)
            {
                if(3*y==5*z) {z=res[++k];l--;}
                res[r++] = 3*y;y=res[++j];
            }
            else 
            {
                res[r++] = 5*z;z=res[++k];
            }
            
        }
        result=res[n];
        return result;
    }
}
