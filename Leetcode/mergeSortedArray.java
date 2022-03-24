class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] first = new int[m];
        for(int i = 0; i < m; i++) {
            first[i] = nums1[i];
        }
        int i = 0, j = 0, idx = 0;
        while(i < m && j < n) {
            if(first[i] > nums2[j]){
                nums1[idx++] = nums2[j++];
            }else {
                nums1[idx++] = first[i++];
            }
        }
        
        while(j < n){
            nums1[idx++] = nums2[j++];
        }
        
        while(i < m){
            nums1[idx++] = first[i++];
        }
    }
}
