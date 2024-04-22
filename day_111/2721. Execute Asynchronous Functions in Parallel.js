/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = function(functions) {
    return new Promise((resolve, reject) => {
        if (functions.length === 0) return resolve([]);

        const results = Array(functions.length);
        let remaining = functions.length;

        for (let i = 0; i < functions.length; i++) {
            functions[i]()
                .then(res => {
                    results[i] = res;
                    if (--remaining === 0) resolve(results);
                })
                .catch(reject);
        }
    }); 
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */