#include <bits/stdc++.h>
#define ll long long
using namespace std;

// function to count unique elements from a vector
int uniqueele(vector<ll> v)
{

    int n = v.size();
    unordered_map<ll, ll> mp;
    for (auto x : v)
    { // auto keyword is used for automatic typename
        mp[x]++;
    }
    //if we want to print elements also 
    //         for(auto y :mp){
    //             cout<<y.first <<" "<< y.second<<"\n";
    //         }
    return mp.size();
}

// function to check a no. is palindrome or not
int ispalindrome(string s){
    int len= s.length();
    
    for(int i=0 ;i<len/2 ;i++){
        if(s[i]!= s[len-i-1])return false;
    }}
    
int main(){

ll t;
cin>>t;
while(t-->0){
    string s;
    cin>>s;
    int i,j;
    i=s.length();j=-1;
    for(int k=0; k<s.length() ;k++){
       if(s[k]=='1'){
           i=min(i,k);
           j= max(j,k);
       }
        
    }
     
        
    
   
  int count_0=0;
  for(int k=i ;k<=j ;k++){
      if(s[k]=='0')count_0++;
  }
  if(count_0>0 || j==-1 )cout<<"NO\n";
  else cout<<"YES\n";
 
    
    // cout<<i <<" "<<j<<"\n";
    
    
    
}
return 0;
}
