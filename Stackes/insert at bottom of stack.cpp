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

int main (){
    stack<int>st;
    int element = 400;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // insertElement(st, element);

    reverse(st);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    

}
