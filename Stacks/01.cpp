#include<iostream>
//#include<stack>
using namespace std;
class Mystack{
    public:
    int *arr;
    int top;
    int size;

    Mystack(int size){
        size=this->size;
        arr = new int(size);
        top=-1;
    }
    void push(int val){
        if(top==size-1){
             cout << "Stack overflow"<< endl;
             return;
        }

        top++;
        arr[top]=val;
        return;
    }
    void pop(){
        if(top==-1) {
            cout<<"Stack underflow" <<endl;
            return;
        top--;
        return;
    }
}
    int peek(){
        if(top==-1){
            cout<< "Stack Empty"<<endl;
            return 0;
        }
        return arr[top];

    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        return false;
    }
};



int main(){
    // stack<int> s;
    // s.push(1);
    // cout << s.top() << endl;
    Mystack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout <<  st.peek() << endl;
    return 0;
}
