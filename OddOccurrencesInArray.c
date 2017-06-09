int solution(int A[], int N) {
  int result = 0;
  int i;
    for (i = 0; i < N; i++){
        result ^= A[i];
    }
    return result;

}