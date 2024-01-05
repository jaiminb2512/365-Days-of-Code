class Solution {
  public:
    int findNthTerm(int N) {
        int last;
        last = (N*N + N)/2;
        return last;
    }
};