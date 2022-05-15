class Solution {
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character, Character> map = new HashMap<Character, Character>();
        HashMap<Character, Boolean> mapChar = new HashMap<Character, Boolean>();
        int size = s.length();
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < size; i++) {
            // klo ada key nya tinggal ganti sm key ny
            if(map.containsKey(s.charAt(i))) {
                sb.append(map.get(s.charAt(i))); 
            } else {
                // klo gaada ganti jg trs mapping
                if(mapChar.containsKey(t.charAt(i)) && !map.containsKey(s.charAt(i))){
                    sb.append("-");
                    continue;
                }
                map.put(s.charAt(i), t.charAt(i));
                mapChar.put(t.charAt(i), true);
                sb.append(t.charAt(i));
            }
        }
        return sb.toString().equals(t);
    }
}
