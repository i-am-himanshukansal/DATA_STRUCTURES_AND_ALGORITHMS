#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cout << "Enter n = ";
    cin >> n;

    vector<int> arr(n);  // Using vector instead of a VLA

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int, int> mpp;

    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;  // Count the frequency of each element
    }

    int test;
    cout << "Enter test cases: ";
    cin >> test;

    while(test--){
        int number;
        cout << "Enter a number to check its frequency: ";
        cin >> number;
        cout << "Frequency of the number is: " << mpp[number] << endl;
    }

    return 0;
}
