class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor) return image;
        fill(image, image[sr][sc], sr, sc, newColor);
        return image;
    }
    public void fill(int[][] image, int node, int sr, int sc, int newColor){
        if (sr < 0 || sr >= image.length || sc < 0 || sc >= image[0].length) return;
        if (image[sr][sc] != node) return;
        //fill 4 ways
        image[sr][sc] = newColor;
        fill(image, node, sr-1, sc, newColor);
        fill(image, node, sr+1, sc, newColor);
        fill(image, node, sr, sc - 1, newColor);
        fill(image, node, sr, sc + 1, newColor);
    }
}