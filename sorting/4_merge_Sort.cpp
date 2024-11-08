#include<bits/stdc++.h>
using namespace std;
void print(vector<int>v){
    cout<<"\nElements inside vector v : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void merge_packet(vector<int>&v , int low,int mid,int high){
        int i  = low;
        int j = mid+1;
        vector<int>temp(high-low+1);
        int k =0;

        while(i<=mid && j<=high){
                if(v[i]<=v[j]){
                        temp[k] = v[i];
                        k++;
                        i++;
                }else{
                        temp[k] = v[j];
                        k++;
                        j++;
                }
        }

        while(i<=mid){
                temp[k] = v[i];
                k++;
                i++;
        }
        while(j<=high){
                temp[k] = v[j];
                k++;
                j++;
        }
        for(int t=0;t<temp.size();t++){
                v[low+t] = temp[t];
        }
}
void merge_sort(vector<int>&v, int low , int high){
        if(low==high) return ;

        int mid = (low+high)/2;
        merge_sort(v,low,mid);
        merge_sort(v,mid+1,high);
        merge_packet(v,low,mid,high);
}
int main(){
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;
    vector<int>v;
    cout<<"Ente r elements in vector v : ";

    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"AFTER ENTERING THE ELEMENTS IN THE VECTOR";
    print(v);
    int low =0;
    int high = v.size()-1;
    merge_sort(v,low,high);

    print(v);
        
   
  
    return 0 ;
}