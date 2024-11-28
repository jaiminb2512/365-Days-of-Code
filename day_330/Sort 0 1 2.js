function sort012(arr) {
    let low = 0;
    let mid = 0;
    let high = arr.length - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                [arr[low], arr[mid]] = [arr[mid], arr[low]];
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                [arr[mid], arr[high]] = [arr[high], arr[mid]];
                high--;
                break;
        }
    }
}

function main() {
    let t = parseInt(readLine());
    
    for (let i = 0; i < t; i++) {
        let n = parseInt(readLine());

        if (n > 0) {
            let arr = readLine().trim().split(' ').map(Number);
            sort012(arr);
            console.log(arr.join(' '));
        } else {
            console.log('');
        }
    }
}

process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();    
});

function readLine() {
    return input_stdin_array[input_currentline++];
}
