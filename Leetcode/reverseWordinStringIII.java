class Solution {
    public String reverseWords(String s) {
        String res = new String();
        String[] temp = s.split(" ");
        int cnt = 0;
        int tempsize = temp.length;
        for (String a : temp) {
            if (cnt != 0) {
                res = res.concat(" ");
            }
            cnt++;
            res = res.concat(reverseWord(a, 0, a.length()-1));
        }
        return res;
    }
    
    public String reverseWord(String s, int start, int end) {
        char[] c = s.toCharArray();
        while(end >= start) {
            char t = c[start];
            c[start] = c[end];
            c[end] = t;
            start++;
            end--;
        }
        return String.valueOf(c);
    }
    
}
