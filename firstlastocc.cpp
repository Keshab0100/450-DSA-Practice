// Given a sorted array arr containing n elements with possibly duplicate elements,
//  the task is to find indexes of first and last occurrences of an element x in the given array.

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{   vector<int> ans; 
    // vector<int> a,b;
    bool flag=false;
    // code here
    for(int i=0;i<n;i++){
        
        if(arr[i]==x){
            ans.push_back(i);
            flag=true;
            break;
        }   

    }
    for(int i=n;i>0;i--){
        if(arr[i]==x){
            ans.push_back(i);
            break;
        }
    }
    if(flag){
        return ans;
    }
    else{
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends