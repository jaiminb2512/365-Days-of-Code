function consoleStr(arr, start, end) {
    let print = ''
    while (start != end) {
        print += arr[start]
        start++
    }

    print += arr[end]

    return print
}

function substrings(str) {  

    let arr = str.split("")

    for (let i = 0; i < arr.length; i++){
        for(let j = i; j < arr.length; j++) {
            if (i == j) console.log(arr[i])
            else {
                let temp = consoleStr(arr, i, j)
                console.log(temp)
            }
        }
    }
     
}