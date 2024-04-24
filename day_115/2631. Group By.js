/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
   
    const values = {}
    
    for (let i = 0; i < this.length; i++) {
        const keyval = fn(this[i])
    
        if(!values[keyval]){ 
                values[keyval] = [this[i]] 
            }
        
        else{
                values[keyval].push(this[i])
            }
    }
    
    return values
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */