//{ Driver Code Starts
// Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString =
        inputString.trim().split('\n').map(string => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

function printList(res, n) {
    let s = "";
    for (let i = 0; i < n; i++) {
        s += res[i];
        s += " ";
    }
    console.log(s);
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {
        let n = parseInt(readLine());
        let arr = new Array(n);
        let input_ar1 = readLine().split(' ').map(x => parseInt(x));
        for (let i = 0; i < n; i++) {
            arr[i] = input_ar1[i];
        }
        let obj = new Solution();
        let res = obj.findTwoElement(arr);
        printList(res, res.length);
    }
} // } Driver Code Ends

// } Driver Code Ends


// User function Template for javascript
/**
 * @param {number[]} arr
 * @returns {number[]}
 */

class Solution {
    // Function to find two repeating elements in an array of size n.
    findTwoElement(arr) {
        let n = arr.length;
        
        let Sum_n = (n * (n + 1)) / 2;
        let Sum_sq_n = (n * (n + 1) * (2 * n + 1)) / 6;
        
        let S1 = 0;
        let S2 = 0;
        
        for (let i = 0; i < n; i++) {
            S1 += arr[i];
            S2 += arr[i] * arr[i];
        }
        
        let diff = S1 - Sum_n;
        let diff_sq = S2 - Sum_sq_n;
        
        let sum = diff_sq / diff;
        
        let B = (sum + diff) / 2;
        let A = sum - B;
        
        return [B, A];
    }

}