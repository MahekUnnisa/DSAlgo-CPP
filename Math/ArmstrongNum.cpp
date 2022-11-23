// https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1
// //Brute force approach
// Time:O(N)
//   Space:O(1)


//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        int ans = 0;
        int temp;
        int curr;
        int x = n;
        while(n!=0){
            curr = n%10;
            temp = pow(curr,3);
            ans+=temp;
            n/=10;
        }
        if(ans==x){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
