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
        int  n1 = c1-'0';
        int n2 = c2-'0';
        char symbol = s[1];
        if(symbol=='='){
                if(n1==n2){
                        cout<<s<<endl;
                }else if(n1>n2){
                        s[1]='>';
                        cout<<s<<endl;
                }else if(n1<n2){
                        s[1]='<';
                        cout<<s<<endl;
                }
        }else if(symbol=='<'){
                if(n1==n2){
                        s[1]='=';
                        cout<<s<<endl;
                }else if(n1>n2){
                        if(n2==0){
                                s[1]='>';
                                cout<<s<<endl;
                        }else{
                                s[0]='0';
                        }
                        cout<<s<<endl;
                }else if(n1<n2){
                        cout<<s<<endl;
                }
        }else if(symbol=='>'){
                if(n1>n2){
                        cout<<s<<endl;
                }else if(n1<n2){
                        s[1]='<';
                        cout<<s<<endl;
                }else{
                        s[1]='=';
                        cout<<s<<endl;
                }
        }
    }
    return 0;
}
