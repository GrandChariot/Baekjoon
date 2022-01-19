long long sum(int *a, int n){
    int i;
    long long ans;
    for (i = 0; i < n; i++){
        ans += a[i];
    }
    return ans;
}