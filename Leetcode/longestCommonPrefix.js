/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    let ans = "";
    strs.sort();
    let shorthestLen = strs[0].length;
    let strslen = strs.length;
    let found = false;
    
    if(strslen == 0) return "";
    if(strslen == 1) return strs[0];
    
    for (let i = shorthestLen; i >= 0; i--) {
        for(let j = 1; j < strslen; j++) {
            if(strs[j].substr(0, i) != strs[0].substr(0, i)) {
                break;
            }
            if(j == strslen - 1) found = true;
        }
        
        if(found) {
            ans = strs[0].substr(0, i);
            break;
        };
    }
    return ans;
};
