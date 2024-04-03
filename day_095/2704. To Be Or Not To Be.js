/**
 * @param {string} val
 * @return {Object}
 */
class ExpectFunctions{
    constructor(actual){
        this.actual = actual;
    }
    
    toBe(expected){
        if(this.actual !== expected){
          throw 'Not Equal';
        }
        return true;
    }
    
    notToBe(expected){
        if(this.actual !== expected){
          return true;
        }
        throw 'Equal';
    }
}

var expect = function(val) {
    return new ExpectFunctions(val);
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */