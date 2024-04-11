/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    
    let isFirst = true;
    return function(...args){
        if(isFirst) {
            isFirst = false
            return fn(...args)
            
        }
        return 
    }
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
