// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
#include <string>
class Solution
{
public:
    int isPalindrome(string S)
    {
        string C = string(S.rbegin(), S.rend());
        if (S == C)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

// { Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Solution ob;

        cout << ob.isPalindrome(s) << "\n";
    }

    return 0;
} // } Driver Code Ends