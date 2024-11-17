function even_odd_sum(num){
		
    /* Write your code here
    No need to specify return type 
    Input and output already taken care of, you have to just return the output array */

    //Return an array of evensum & oddsum like {evensum , oddsum};
    let evensum = 0;
    let oddsum = 0;
    let temp = 0;

    while (num > 0) {
        temp = num % 10; 
        num = Math.floor(num / 10);

        if (temp % 2 == 0) evensum += temp;
        else oddsum += temp;
    }

    let ans = [evensum, oddsum]
    return ans
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


var num =  parseInt(readLine());

let res = even_odd_sum(num);
console.log(res[0] , res[1]);

}