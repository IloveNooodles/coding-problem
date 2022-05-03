/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    if(needle == "") return 0;
    let hSize = haystack.length;
    let nSize = needle.length;
    let ptr = 0;
    for(let i = 0; i < hSize; i++) {
        ptr = i;
        for(let j = 0; j < nSize; j++) {
            if(haystack[ptr] != needle[j]) break;
            if(j == nSize - 1) return i;
            ptr++;
        }
    }
    return -1;
};
