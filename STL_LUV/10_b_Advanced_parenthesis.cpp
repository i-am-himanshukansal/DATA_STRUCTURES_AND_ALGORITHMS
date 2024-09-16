#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>unmap={{'[',-1} , {']',1} , {'{',-2} , {'}',2} , {'<',-3} , {'>',3},{'(',-4},{')',4}};
string isbalanced(string &s){  //function return string
    stack<char>st;
    for(char &bracks : s){
        if(unmap[bracks]<0){
            st.push(bracks);
        }else{
            if(st.empty()){
                return "NO\n";
            }
                auto top = st.top();
                st.pop();
                if(unmap[top] + unmap[bracks]!=0){
                    return "NO\n";
                }

            }
        }
        if(st.empty())   return "yes\n";
          return "NO\n";
}


// unordered_map<char,int>um={{}}
int main(){
int t;
cout<<"enter cases : ";
cin>>t;
while(t--){
    string str;
    cout<<"enter string : ";
    cin>>str;
    cout<<isbalanced(str);
}



   return  0;
}