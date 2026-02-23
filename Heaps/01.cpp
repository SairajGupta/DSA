/*
    Heaps-> a heap is a complete binary tree that follows the heap order property
    complete binary tree(CBT) -> all levels are completely filled except the last level,the last level is filled from left to right
    Heap order property-> 1. Max heap-> Every parent node is greater than or equal to its children 
                                        the largest element is alwayts at root.
                          2. Min heap -> every parent node is smaller than or equal to its children
                                        the smallest element is always the root.              
                in 1-based for any node-> leftchild=2*i
                                          rightchild=2*i+1
                                          parent=i/2
                in 0-based for any node-> leftchld=2*i+1
                                          rightchild=2*i+2
                                          parent=(i-1)/2
                */
#include<iostream>
using namespace std;
// void bubbledown(){
//     int i=0;
//     int size=heap.size();
//     while(i<size){
//         int left=2*i+1;
//         int right=2*i+2;
//         int largest=i;
//         if(left<size&&heap[left]>heap[largest]){
//             largest=left;
//         }
//         if(right<size&&heap[right]>heap[largest]){
//             largest=right;
//         }
//         if(largest!=i){
//             swap(heap[i],heap[largest]);
//             i=largest;
//         }
//         else{
//             break;
//         }
//     }
// }
// void delete(){
//     swap(heap[heap.size()-1],heap[0]);
//     heap.size()--;
//     bubbledown();
// }
void heapify(vector<int> &arr,int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n&&arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n&&arr[right]>arr[largest]){
        largest=right;
    }   
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void buildMaxHeap(vector<int> &arr,int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
}
int main(){
    vector<int> arr={10,3,5,30,2,8,15};
    int n=arr.size();
    cout<<"original array";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    buildMaxHeap(arr,n)
}