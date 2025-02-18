#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st, int element){
    
    if(st.empty()){
        st.push(element);
        return;
    }
    // ek case solve
    int temp = st.top();
    st.pop();

    // rest case solv using recurrsion

    insertAtBottom(st, element);

    // bactracking
    st.push(temp);
}

int main() {
     
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int element = 400;

    insertAtBottom(st, element);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
    

    
}








// // reverse using stack

// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//   int arr[] = {3,5,2,7,4,9};
//   int size = 6;
//   stack<int>st;

//   for(int i = 0; i<size; i++){
//         int num  = arr[i];
//        st.push(num);
//   }

//   while(!st.empty()){
//        cout << st.top() << " ";
//        st.pop();
       
//   }
  
// return 0;
// }