// #include<iostream>
// using namespace std;
// int main(){
//     int n,temp;
//     cin>>n;
//     int arr[n]={0};

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//       temp = arr[i];
//       arr[i]=arr[n-i];  
//       arr[n-i+1]=temp;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" "<<endl;
//     }
    
//     return 0;
//     //Q. Write a program to reverse an array or string
// }
// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    int temp;
    int start=0;
    int end= str.length()-1;
    while(start<end){
        temp= str[start];
        str[start]= str[end];
        str[end]= temp;
        start++;
        end--;
    }
    
    return str;
  //Your code here
}