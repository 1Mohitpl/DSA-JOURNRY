#include<iostream>
#include<stack>
using namespace std;
int main () {

     // stack creation

     stack<int>st;

     // stack insertion 

     st.push(20);
     st.push(50);
     st.push(69);

     cout << "size of the given stack" << st.size() << endl;
}