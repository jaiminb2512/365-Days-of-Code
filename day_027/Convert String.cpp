#include <bits/stdc++.h> 
string convertString(string str) 
{
	stringstream ss(str);
    string word, result;

	while (ss >> word) 
    {
        word[0] = toupper(word[0]);

        result += word + " ";
    }

     result.pop_back();
    return result;

}