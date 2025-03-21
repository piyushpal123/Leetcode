/**
 * @param {*} obj
 * @param {*} classFunction
 * @return {boolean}
 */
var checkIfInstanceOf = function(obj, classFunction) {
    
    if (obj == null || typeof classFunction !== 'function') return false;

    
    if (typeof obj !== 'object') {
        obj = Object(obj);
    }

    let currentPrototype = Object.getPrototypeOf(obj);

    while (currentPrototype !== null) {
        if (currentPrototype === classFunction.prototype) return true;
        currentPrototype = Object.getPrototypeOf(currentPrototype);
    }

    return false;
};

/**
 * checkIfInstanceOf(new Date(), Date); // true
 */