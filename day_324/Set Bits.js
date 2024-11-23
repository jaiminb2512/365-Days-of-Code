function set_bits(n) {

    let ans = 0;
    while (n > 0) {
        if (n % 2 == 1) ans++;
        n = Math.floor(n / 2);
    }

    return ans;
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


function main() {


    var num = parseInt(readLine());

    let res = set_bits(num);
    console.log(res);

}