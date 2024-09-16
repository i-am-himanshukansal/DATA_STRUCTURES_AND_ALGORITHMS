#include<bits/stdc++.h>
using namespace std;
int main(){

    multimap<int,multiset<string>>m;
    int n;
    cout<<"enter no of different marks = ";
    cin>>n;
   
   for(int i=0;i<n;i++){
    int marks;
    // cout<<"enter marks : ";
   
    multiset<string>name;
 int N;//no of stuents for same marks
 cout<<"enter marks and no of student for same marks : ";
 cin>>marks>>N;
 cout<<"enter students name : ";
    for(int j=0;j<N;j++){
        string str;
        cin>>str;
        name.insert(str);
    }
    m.insert({(-marks),name});//value are assigned to map , pair ; {a,b}
    cout<<endl;
   }
cout<<"now the result is showing to you \n\n";
for(auto &pr : m){
    int mark = pr.first;
    auto allname = pr.second;//set
    cout<<"marks be : "<<(-mark)<<"   students be : ----->";
    for(auto &individual:allname){//each name from set
    cout<<individual<<" , ";        
    }
    cout<<endl;
}

    return 0;
}