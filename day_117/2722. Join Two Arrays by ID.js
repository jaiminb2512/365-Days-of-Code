/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */

var join = function(arr1, arr2) {
    let mergedMap = new Map();
    
    const mergeObjects = (obj1, obj2) => {
        let merged = {...obj1};
        for (let key in obj2) {
            merged[key] = obj2[key];
        }
        return merged;
    };
    
    for (let obj of arr1) {
        mergedMap.set(obj.id, obj);
    }
    
    for (let obj of arr2) {
        if (mergedMap.has(obj.id)) {
            let mergedObj = mergeObjects(mergedMap.get(obj.id), obj);
            mergedMap.set(obj.id, mergedObj);
        } else {
            mergedMap.set(obj.id, obj);
        }
    }
    
    let joinedArray = Array.from(mergedMap.values()).sort((a, b) => a.id - b.id);
    
    return joinedArray;
};
