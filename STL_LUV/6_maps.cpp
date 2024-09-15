//auto keyword used in this 
#include<bits/stdc++.h>
using namespace std;
void printfunc(map<int,string>&m1){
  auto it = m1.begin();
        for(it=m1.begin();it!=m1.end();it++){
            cout<<"key be  : "<<it->first<<" value be : "<<it->second<<endl;
        }
}
int main(){

        map<int,string>m1;
        cout<<"--------------------->start 1 ---------------------->"<<endl;
        m1.insert({1,"himanshukansal"});//start 1----------------------->
        m1.insert({{0,"goli"}});// ----------->O(log(n))
        m1.insert({2,"kansal"});
        printfunc(m1);

      
        m1.erase(1);//erase function ----------->O(log(n))
         cout<<"--------------------->start 2 ---------------------->"<<endl;
        printfunc(m1);//-------------------->start 2 ---------------------->

        auto it2 = m1.find(2);//m.find ----------->O(log(n))
        cout<<it2->second<<endl;


        multimap<int,string>unmap;//
        unmap.insert({1,"abcd"});
        unmap.insert({1,"himanshukansal"});

        auto it = unmap.begin();
        for(it=unmap.begin();it!=unmap.end();it++){
                        cout<<it->first<<" "<<it->second<<endl;

        }





return 0;
}