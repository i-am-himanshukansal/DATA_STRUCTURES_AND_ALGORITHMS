//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
       
        int i=0;
        while(i < s1.size()&&s1[i]=='0'){
            i++;
        }
        string a = s1.substr(i);//correct string 1 without initial zeroes
        int j=0;
        while(j<s2.size()&&s2[j]=='0'){
            j++;
        }
        string b = s2.substr(j);//corrected string 2 without initial 
        
        if(a.size()<b.size()){
            swap(a,b);
        }
        int l1 =  a.size();
        int l2 =  b.size();
        
        
        int carry = 0;
        string ans = "";
        
        
            for(int i=0;i<l2;i++){//check1
                int elem1 = a[a.size()-1-i]-'0';
                int elem2 = b[b.size()-1-i]-'0';
                int sum =(elem1)+(elem2)+carry;
                if(sum==3){
                    carry = 1;
                    ans+='1';
                }else if(sum==2){
                    carry=1;
                    ans+='0';
                }else if(sum==1){
                    carry = 0;
                    ans+='1';
                }else{
                    carry=0;
                    ans+='0';
                }
            }                   //check1
            
            int jj=l1-l2-1;
            while(jj>=0){
                int elem = a[jj]-'0';
                if(carry+elem==2){
                    carry = 1;
                    ans+='0';
                }else if(carry+elem==1){
                    carry=0;
                    ans+='1';
                }else if(carry+elem==0){
                    carry = 0;
                    ans+='0';
                }
                jj--;
            }
            if(carry==1){
                ans+='1';
            }
            
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver 