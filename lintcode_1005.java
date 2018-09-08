import java.util.Arrays;
public class Solution {
    /**
     * @param n: An integer
     * @param nums: An array
     * @return: the Kth largest element
     */
    public int kthLargestElement(int n, int[] nums) {
        // write your code here
        int l=nums.length;
        int k=l-n;
        Arrays.sort(nums,0,l);
        return nums[k];
    }
}
