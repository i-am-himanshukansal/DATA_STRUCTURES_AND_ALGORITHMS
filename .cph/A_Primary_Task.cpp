#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int a;
        cin>>a;

        if(a<102){
        cout<<"NO"<<endl;
        continue;
        }
        
        string str = to_string(a);
        string tenn = str.substr(0,2);
        if(tenn!="10"){
            cout<<"NO"<<endl;
            continue;
        }

        if(str[2]=='0'){
            cout<<"NO"<<endl;
            continue;
        }
        string powr = str.substr(2);
        int  p = stoi(powr);
        if(tenn=="10" && p>=2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}