#include <bits/stdc++.h> 
char firstNonRepeatingCharacter(string str) {

 unordered_map<int, int> freqMap;
 for(char ch : str){
   freqMap[ch]++;
 }

 for(char ch : str){
   if(freqMap[ch] == 1){
     return ch;
   }
 }

 return str[0];

}
