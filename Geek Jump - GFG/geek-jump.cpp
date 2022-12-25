//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        vector<int>dp(n+1,-1);
        return go(height, n-1,dp);
    }
    int go(vector<int>&h, int i,vector<int>&dp)
    {
        if(i<=0)return 0;
        int one=1e9,two=1e9;
        if(dp[i]!=-1)return dp[i];
        one= abs(h[i]-h[i-1]) + go(h,i-1,dp);
        if(i>=2) two= abs(h[i]-h[i-2]) + go(h,i-2,dp);
        return dp[i]=min(one,two);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends