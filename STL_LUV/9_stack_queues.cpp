#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
   int n;
   cout<<"enter s : number : ";
   cin>>n;

   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    s.push(x);
    cout<<s.size()<<endl;
   }

   while(!s.empty()){
    
    cout<<(s.top())<<" "<<s.size()<<"----";
    s.pop();
    
   }
   cout<<"\n\n\nqueues start "<<endl;

    return  0 ;
}