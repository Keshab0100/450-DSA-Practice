#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p=0;
    int q=n-1;
	
	for(int i = 0; i<n; i++){
	    if(arr[i]<0){
	        b[p]=arr[i];
	        p++;
	    }
	    else{
	        b[q]=arr[i];
	        q--;
	    }
	}
	for(int i=0;i<n;i++){
	    cout<<b[i]<<" ";
	}
	return 0;
}