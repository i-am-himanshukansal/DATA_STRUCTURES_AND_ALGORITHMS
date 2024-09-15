//SET
#include<bits/stdc++.h>
using namespace std;

void printset(set<string>&s){
    for(auto elem:s){
        cout<<elem<<" ";
    }
    cout<<endl;
}
int main(){

    set<string>s;
    s.insert("abc");
    s.insert("denjlndle");
    s.insert("hk");
    s.insert("kansal");
    printset(s);
    auto it = s.find("samsal");
    // if(it!=s.end()){
        cout<<*it<<endl;//----->log(N)
        s.erase(it);//--->log(N)
        printset(s);
    // }
    
    return 0;
}