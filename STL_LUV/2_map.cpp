#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int ,string>p1;
    p1=make_pair(2,"himanshukansal kansal");
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,string> &p=p1; // p1 ka address p ne store kar liya hai
    cout<<p.first<<" "<<p1.first<< " "<<p.second<<endl;
    p.first = 9;
    p.first = 78;
    p.second  = "mr kansal ji";
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;
    cout<<&(p.first)<<endl;
    cout<<&(p1.first)<<endl; 


    int a[] = {1,2,3,4};
    int b[] = {2,3,6,5};
    pair<int ,int>arr[3];
    arr[0]={15,256};
    arr[1]={12,23};
    arr[2]={1,2};
    cout<<"before swapping : ";
    cout<<arr[0].first<<" "<<arr[0].second<<" "<< "------------"<<arr[2].first<<" "<<arr[2].second<<endl;
    swap(arr[0],arr[2]);
    cout<<"after swapping : ";
      cout<<arr[0].first<<" "<<arr[0].second<<" "<< "------------"<<arr[2].first<<" "<<arr[2].second<<endl;

        return 0;
}