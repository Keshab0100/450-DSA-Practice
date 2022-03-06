// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{   
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int k = 0, m = n-1;
        int b[n];
        for(int i =0; i<n; i++){
            if(a[i] == 0){
                b[k] = 0;
                k++;
            }
            else if(a[i] == 2){
                b[m]=2;
                m--;
            }
            else{
                continue;
            }
        }
        for(int i=k;i<=m;i++){
            b[i]=1;
        }
        for(int i =0; i<n; i++){
            a[i]=b[i];
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends