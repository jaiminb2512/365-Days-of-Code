void solver(vector<vector<long long int>> &ans, vector<long long int> &temp,
            int n, int currlen) {
  if (currlen == n) {
    return;
  }

  if (currlen == 0) {
    temp.push_back(1);
    ans.push_back(temp);
  } else {
    temp.clear();
    temp.push_back(1);
    vector<long long int> &prev = ans.back();

    for (int i = 1; i < currlen; ++i) {
      temp.push_back(prev[i - 1] + prev[i]);
    }
    
    temp.push_back(1);
    ans.push_back(temp);
  }

  solver(ans, temp, n, currlen + 1);
}

vector<vector<long long int>> printPascal(int n) {
  if (n == 0) {
    return {};
  }

  vector<vector<long long int>> ans;
  vector<long long int> temp;
  solver(ans, temp, n, 0);

  return ans;
}