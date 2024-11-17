int makeBeautiful(string str) {
    int n = str.length();

	int countPattern1 = 0;
    int countPattern2 = 0;

	for(int i=0; i<n; ++i){

		char expectedPattern1 = (i % 2 == 0) ? '0' : '1';
		char expectedPattern2 = (i % 2 == 0) ? '1' : '0';

		if(str[i] != expectedPattern1) countPattern1++;
		if(str[i] != expectedPattern2) countPattern2++;
        
	}

    return min(countPattern1, countPattern2);
}