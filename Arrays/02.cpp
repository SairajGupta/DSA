#include<iostream>
using namespace std;
int main(){
    int maxsum=0;
    int maxi=0;
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{0,1,2,3}};
    for(int i = 0;i<3;i++){
        int csum=0;
        for(int j=0;j<3;j++){
            csum+=arr[i][j];
        }
        if(csum>maxsum){
            maxi=i;
            maxsum=csum;
        }
    }
    cout<<maxsum<< " at index "<<maxi<<endl;
}