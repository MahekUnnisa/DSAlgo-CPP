// https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1
//{ Driver Code Starts
//Time Complexity: O(logɸmin(a,b)),where ɸ is 1.61.

// Space Complexity: O(1).

//Brute force
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a = 4, b = 8;
	int gcd;
	for (int i = 1; i <= min(a, b); i++) {
		if (a % i == 0 && b % i == 0) {
			gcd = i;
		}
	}
	int lcm = (a * b) / gcd;
	cout <<"The LCM of the two given numbers is "<<lcm;

}

// Optimied

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long gcd(long long A, long long B){
        if(B==0){
            return A;
        }
        return gcd(B,A%B);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long>v;
        long long g = gcd(A,B);
        long long l = A*B/g;
        
        v.push_back(l);
        v.push_back(g);
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
