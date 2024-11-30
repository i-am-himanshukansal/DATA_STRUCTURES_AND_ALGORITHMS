#include <iostream>
using namespace std;

int main() {
    // Your code here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        char c1 = s[0];
        char c2 = s[2];
        int n2 = c2-'0';
        char symbol = s[1];
        if(n1>n2){
                if(symbol=='>'){
                        cout<<s<<endl;
                }else{
                        s[1]='>';
                        cout<<s<<endl;
                }
        }else if(n1<n2){
                 if(symbol=='<'){
                        cout<<s<<endl;
                }else{
                        s[1]='<';
                        cout<<s<<endl;
                }
        }else {
                 if(symbol=='='){
                        cout<<s<<endl;
                }else{
                        s[1]='=';
                        cout<<s<<endl;
                }
        }
    }
    return 0;
}