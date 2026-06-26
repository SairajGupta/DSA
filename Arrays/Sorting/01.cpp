#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
    vector<int> arr = {6,5,4,8,2,1};
    cout<<"Q1"<<endl;
    for(int i = 0;i<arr.size()-1;i++){
        for(int j = 1;j<arr.size()-i;j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j],arr[j-1]);
            }
            for(int x: arr){
                cout<<x<<",";
            }
            cout<<endl;
        }
    }
    cout<<"Q2"<<endl;
    vector<int> arr2 = {6,5,4,8,2,1};
    for(int i = 0;i<arr2.size()-1;i++){
        for(int j = arr2.size()-1;j>i;j--){
            if(arr2[j-1]>arr2[j]){
                swap(arr2[j],arr2[j-1]);
            }
            for(int x: arr2){
                cout<<x<<",";
            }
            cout<<endl;
        }
    }
    vector<int> arr3 = {6,5,4,8,2,1};
    cout<<"Q3"<<endl;
    for(int i = 0;i<arr3.size()-1;i++){
        for(int j = 1;j<arr3.size()-i;j++){
            if(arr3[j-1]<arr3[j]){
                swap(arr3[j],arr3[j-1]);
            }
            for(int x: arr3){
                cout<<x<<",";
            }
            cout<<endl;
        }
    }
    cout<<"Q4"<<endl;
    vector<int> arr4 = {6,5,4,8,2,1};
    for(int i = 0;i<arr4.size()-1;i++){
        for(int j = arr4.size()-1;j>i;j--){
            if(arr4[j-1]<arr4[j]){
                swap(arr4[j],arr4[j-1]);
            }
            for(int x: arr4){
                cout<<x<<",";
            }
            cout<<endl;
        }
    }
    return 0;
}