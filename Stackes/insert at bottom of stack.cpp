#include<iostream>
#include<stack>
using namespace std;

void insertElement(stack<int> &st, int &element){
     if (st.empty())
     {
        st.push(element);
        return;
     } 
     int temp = st.top();
        st.pop();

     insertElement(st, element);
     // backtracking

     st.push(temp);
}
// revser an stack 
void reverse(stack<int> &st){
    //base case
    if (st.empty())
    {
        return;
    }
    

    int temp = st.top();
    st.pop();


    reverse(st);

    insertElement(st, temp);
}

void insertsorted(stack<int> &st, int element){
    if (st.empty() || element > st.top())
    {
        st.push(element);
        return;
    }
    if (element<st.top()){
    
        int temp = st.top();
        st.pop();
   
    
    insertsorted(st, element);

    // backtracking

    st.push(temp);
    }

}

int main (){
    stack<int>st;
    // int element = 400;
    int element = 25;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // insertElement(st, element);
     insertsorted(st, element);
    // reverse(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

}
