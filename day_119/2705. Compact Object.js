/**
 * @param {Object|Array} obj
 * @return {Object|Array}
 */
var compactObject = function(obj) {
    
    if(Array.isArray(obj)) {
        obj = obj.filter((v) => !(Boolean(v) === false))
        
        for (let i=0; i < obj.length; i++) {
        
            if(typeof obj[i] === 'object' && obj[i] != null) {
            obj[i] = compactObject(obj[i])
          
            }
        }
      }
    
      else {
        
          for (let key in obj) {
          
              if(typeof obj[key] === 'object' && obj[key] != null) {
            
                  let result = compactObject(obj[key])
                    if(Boolean(result) === false) delete obj[key]
                
              else obj[key] = result
          }
              
          else if(Boolean(obj[key]) === false) {
            delete obj[key]
          
          }
        }
      }
    
  return obj
};