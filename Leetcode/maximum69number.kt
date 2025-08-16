class Solution {
    fun maximum69Number (num: Int): Int {
        val arr = mutableListOf<Int>()
        var numIter = num;
        while(numIter > 0){
            val remainder = numIter % 10;
            numIter /= 10;
            arr.add(remainder);
        }
        for(i in arr.size-1 downTo 0){
            if(arr[i] == 6){
               arr[i] = 9; 
               break;
            }
        }

        return arr.reversed().joinToString("").toInt();
    }
}
