//Brute-force solution
//easy
//https://practice.geeksforgeeks.org/problems/sum-of-first-n-terms

//O(N) Time Complexity


//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long N) {
        long long int ans=0;
        long long int temp;
        for(long long int i=1;i<=N;i++){
            temp = pow(i,3);
            ans+=temp;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends


//most optimised using formulae
// Sum of the cubes of n natural numbers

//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long N) {
        if(N==0){
            return 0;
        }
        if(N==1){
            return 1;
        }
      //formula
       long long int temp2 = (N+1)*(N+1);
       long long int temp = ((N*N)*(temp2))/4;
       return temp;
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends
