// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    vector<int> arr = {6,5,4,8,2,1};
    cout<<"Q1"<<endl;
    for(int i=0;i<arr.size()-1;i++){
    int max = i;
        for(int j = i+1;j<arr.size()-1;j++){
            if(arr[j]>arr[max]){
                max=j;
            } 
        }
        swap(arr[i],arr[max]);
        for(int x:arr){
            cout<<x <<",";
        }
        cout<<endl;
    }
    vector<int> arr2 = {6,5,4,8,2,1};
    cout<<"Q2"<<endl;
    for(int i=0;i<arr.size()-1;i++){
    int min = i;
        for(int j = i+1;j<arr.size();j++){
            if(arr2[j]<arr2[min]){
                min=j;
            } 
        }
        swap(arr2[i],arr2[min]);
        for(int x:arr2){
            cout<<x <<",";
        }
        cout<<endl;
    }
}