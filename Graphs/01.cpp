#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the Number of vertices: ";
    cin>>n;
    cout<<"Enter Number of edges: ";
    cin>>m;
    unordered_map<int,vector<int>> adjList;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    cout<<"Adj List"<<endl;
    for(auto i: adjList){
        cout<<i.first<<"->";
        for(auto j:i.second){
            cout<<j<<" ";
        }
        cout << endl;
    }
}