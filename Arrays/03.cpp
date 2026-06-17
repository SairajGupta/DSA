
#include<iostream>
using namespace std;

void print spiral(int arr[][4],int row,int col){
    int leftcol=0;
    int rightcol=col-1;
    int toprow=0;
    int bottomrow=row-1;

    while(toprow<=bottomrow && leftcol<rightcol){
        for(int i=leftcol;i<rightcol;i++){
            cout<< arr[toprow][i]<<" , ";
        }
        toprow++;
        for(int i=toprow;i <= bottomrow;i++){
            cout<<arr[i][rightcol]<< " , ";
        }
        rightcol++;
        for(int i=rightcol;i>=leftcol;i--){
            cout<< arr[bottomrow][i]<<" , ";
        }
        bottomrow++;
        for(int i=bottomrow;i>=toprow;i--){
            cout<<mat[i][leftcol]<< " , ";
        }
    }
}
int main(){
    
}