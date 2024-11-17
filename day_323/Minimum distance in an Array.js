//{ Driver Code Starts
//Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let n = parseInt(readLine());
        let a = new Array(n);
        let input_ar = readLine().split(' ').map(x=>parseInt(x));
        for(let i=0;i<n;i++)
            a[i] = input_ar[i];
        let obj = new Solution();
        let input = readLine().split(' ').map(x=>parseInt(x));
        let x = input[0];
        let y = input[1];
        let ans = obj.minDist(a,n,x,y);
        console.log(ans);
        
    }
}
// } Driver Code Ends


//User function Template for javascript

/**
 * Function to Minimum distance between two numbers
 * @param {number[]} a
 * @param {number} n
 * @param {number} x
 * @param {number} y
 * @returns {number[]}
*/

class Solution {
  
    minDist(a, n, x, y) {
        let minDist = Number.MAX_SAFE_INTEGER;
        let lastX = -1, lastY = -1;

        for (let i = 0; i < n; i++) {
            if (a[i] === x) {
                lastX = i;
            }
            if (a[i] === y) {
                lastY = i;
            }

            if (lastX !== -1 && lastY !== -1) {
                minDist = Math.min(minDist, Math.abs(lastX - lastY));
            }
        }

        return minDist === Number.MAX_SAFE_INTEGER ? -1 : minDist;
    }
}
