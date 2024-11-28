//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
            long long int x = 0;
            
            bool sign = true;//for positive integer
            int first = -1;
            int last = strlen(s);
            
            
            for(int i=0;i<strlen(s);i++){
                if(s[i]=='-'&& first==-1){
                    sign = false;
                }else if((s[i]>='0' && s[i]<='9')){
                    if(first==-1){
                        first=i;
                    }
                    x =x*10+(s[i]-'0');
                }else if(s[i]=='-' && sign==false){
                    last= i;
                }else if((!(s[i]>='0' && s[i]<='9')|| s[i]==' ')  && s[i]!='-'){
                    last = i;
                    break;
                }
            }
            if(first ==-1){
                return 0;
            }
            
            
               if(!sign){
                   x=-x;
               }
               
            if (x > INT_MAX) {
                return INT_MAX;
            } else if (x < INT_MIN) {
                return INT_MIN;
            }

    return x;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends