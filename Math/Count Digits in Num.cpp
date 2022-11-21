// https://practice.geeksforgeeks.org/problems/count-digits5716/1
//Easy

//count all the digits in a number when the given Num is divisible by that digit.

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int cnt = 0;
        int temp;
        int curr = N;
        while(N!=0){
            temp = N%10;
            if(temp!=0 && curr%temp==0){
                cnt++;
                N/=10;
            }
            else{
                N/=10;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
