// { Driver Code Starts
// Initial Template for C

#include <stdio.h>
#include<algorithm>

struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) ;

int main() {
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        for (i = 0; i < n; i++) scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
}// } Driver Code Ends

// User function Template for C
struct pair getMinMax(long long int arr[], long long int n) {
    pair z;
    int minn, maxx;
    for(int i=0;i<n;i++){
        minn = min(minn, arr[i]);
        maxx = max(maxx, arr[i]);
    }
    z.min = minn;
    z.max = maxx;
    return z;
}