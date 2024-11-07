#include<bits/stdc++.h>
using namespace std;
void print(vector<int>v){
    cout<<"\nElements inside vector v : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
vector<int>insertion_sort_1(vector<int>v){
   for(int i= 1;i<v.size();i++){
        int temp = v[i];
        int j = i-1;
        

        while(j>=0 && v[j]>temp){
                v[j+1] = v[j];
                j--;
        }
        v[j+1] = temp;
    }
   
     return v;
}
vector<int> insertion_sort_2(vector<int>v){
   for(int i= 1;i<v.size();i++){
        int temp = v[i];
        int k = i;
        for(int j=i-1;j>=0;j--){
                if(v[j]>temp){
                    v[j+1] = v[j]; 
                    k=j;//ya phir jo place update hua tha uaka memory lelo baad me update karenge 
                    //kyoki isme shuru se hi sorted rahega data 
                }
        }
        v[k] =  temp;
    }
     return v;
}

int main(){
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;
    vector<int>v;
    cout<<"Enter elements in vector v : ";

    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"\n\nafter insertion sort 1 : ";
    v =insertion_sort_1(v);
    print(v);
        

    cout<<"\n\nafter insertion sort 2 : ";
    v =insertion_sort_2(v);
    print(v);
        
   
  
    return 0 ;
}