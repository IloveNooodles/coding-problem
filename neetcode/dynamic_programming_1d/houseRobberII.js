/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function(nums) {
    let size = nums.length;
    if(size == 1){
        return nums[0];
    }
    let a = robRange(nums, 0, size - 1);
    let b = robRange(nums, 1, size);
    console.log(a, b);
    return Math.max(a, b);
};
/**
 * @param {number[]} nums
 * @return {number}
 */
var robRange = function(nums, start, end){
    const size = nums.length;
    const arr = Array(size).fill(0);

    arr[start] = nums[start];
    arr[start + 1] = Math.max(arr[start], nums[start + 1]);

    for(let i = start + 2; i < end; i++){
        arr[i] = Math.max(arr[i - 2] + nums[i], arr[i - 1]);
    }

    return arr[end - 1];
}
