class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        if(nums1.length == 0 && nums2.length == 0) {
            return null;
        }
        if(nums1.length == 0) {
            return nums2;
        }
        if(nums2.length == 0) {
            return nums1;
        }
        HashMap<Integer, Integer> s = new HashMap<>();
        boolean first = nums1.length >= nums2.length;
        if (first) {
            s = fillHashMap(nums1);
            return findIntersection(s, nums2);
        } else {
            s = fillHashMap(nums2);
            return findIntersection(s, nums1);
        }
    }
    
    public HashMap<Integer, Integer> fillHashMap(int[] nums) {
        HashMap<Integer, Integer> m = new HashMap<>();
        for(int num : nums) {
            if (m.containsKey(num)) {
                int len = m.get(num);
                len++;
                m.put(num, len);
            } else {
                m.put(num, 1);
            }
        }
        return m;
    }
    
    public int[] findIntersection(HashMap<Integer, Integer> m, int[] s) {
        int[] res = new int[1005];
        int i = 0;
        for (int num : s) {
            if (m.containsKey(num)) {
                int len = m.get(num);
                if(len <= 0) continue;
                res[i] = num;
                i++;
                len--;
                m.put(num, len);
            } 
        }
        int[] re = new int[i];
        int j = 0;
        while(j < i) {
            re[j] = res[j];
            j++;
        }
        return re;
    }
}
