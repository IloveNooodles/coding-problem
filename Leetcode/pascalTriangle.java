class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> l = new ArrayList<List<Integer>>();
        for (int i = 0; i < numRows; i++) {
            
            ArrayList<Integer> row = new ArrayList<>();
            if (i == 0) {
                row.add(1);
                l.add(row);
                continue;
            }
            else if (i == 1) {
                row.add(1);
                row.add(1);
                l.add(row);
            } else {
                List<Integer> prevRow = l.get(i - 1);
                System.out.println(prevRow);
                int size = prevRow.size();
                row.add(1);
                for (int j = 0; j < size - 1; j++) {
                    row.add(prevRow.get(j) + prevRow.get(j+1));
                }
                row.add(1);
                l.add(row);
            }
            
        }
        return l;
    }
}
