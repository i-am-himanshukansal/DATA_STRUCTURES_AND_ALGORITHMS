// printing name 4 times by using recursion/////////////////////////////////////////
                // #include<iostream>
                // using namespace std;
                // int n = 1;
                // void printname(){
                //     if(n>4)return;
                //     cout<<n<<"    =>    himanshukansal 22132"<<endl;
                //     n++;
                //     printname();
                // }
                // int main(){
                //         printname();
                //         return 0 ;
                // }

                            //print linearly from 1 to N//////////////////////////////////////////////
                                            // #include<iostream>
                                            // using namespace std;
                                          
                                            // void printnumber(int i,int &n){
                                            //     if(i>n)return;
                                            //     cout<<i<<" ";
                                            //     printnumber(i+1,n);
                                            //     }
                                            // int main(){
                                            //     int n;
                                            //     cin>>n;
                                            //     printnumber(1,n);
                                            //     return 0;
                                           // }
//print linearly from Nto 1//////////////////////////////////////////////
// #include<iostream>
// using namespace std;

// void printnumber(int i,int &n){
// if(i==0)return;
// cout<<i<<" ";
// printnumber(i-1,n);
// }
// int main(){
// int n;
// cin>>n;
// printnumber(n,n);
// return 0;
// }                                          
                        // print linearly from N to 1 but by backtracking//////////////////////////////////////////////
                        // #include<iostream>
                        // using namespace std;
                        // void printnumber(int i,int &n){
                        // if(i>n)return;
                        // printnumber(i+1,n);
                        //  cout<<i<<" ";
                        // }
                        // int main(){
                        // int n;
                        // cin>>n;
                        // printnumber(1,n);
                        // return 0;
                        // }                  
 // print linearly from 1 to N but by backtracking//////////////////////////////////////////////
#include<iostream>
using namespace std;
void printnumber(int i,int &n){
if(i==0)return;
printnumber(i-1,n);
    cout<<i<<" ";
}
int main(){
int n;
cin>>n;
printnumber(n,n);
return 0;
}        