// #include<iostream>
// #include<stack>
// using namespace std;

// void insertElement(stack<int> &st, int &element){
//      if (st.empty())
//      {
//         st.push(element);
//         return;
//      } 
//      int temp = st.top();
//         st.pop();

//      insertElement(st, element);
//      // backtracking

//      st.push(temp);
// }
// // revser an stack 
// void reverse(stack<int> &st){
//     //base case
//     if (st.empty())
//     {
//         return;
//     }
    

//     int temp = st.top();
//     st.pop();


//     reverse(st);

//     insertElement(st, temp);
// }

// void insertsorted(stack<int> &st, int element){
//     if (st.empty() || element > st.top())
//     {
//         st.push(element);
//         return;
//     }
//     if (element<st.top()){
    
//         int temp = st.top();
//         st.pop();
   
    
//     insertsorted(st, element);

//     // backtracking

//     st.push(temp);
//     }

// }

// int main (){
//     stack<int>st;
//     // int element = 400;
//     int element = 25;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     // insertElement(st, element);
//      insertsorted(st, element);
//     // reverse(st);

//     while (!st.empty())
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;

// }


// implement two stack in an array
#include<iostream>
#include<stack>
using namespace std;

class Stack {
    public:
    int *arr;
    int size;
    int top1;
    int top2;

   Stack(int size) {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;

        // Initialize array to zero or any default value
        for(int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    } 

    void push1(int data) {
        if(top2 - top1 == 1) {
            cout << "Stack is overflow" << endl;
        } else {
            top1++;
            arr[top1] = data;
        }
    }

    void push2(int data) {
        if (top2 - top1 == 1) {
            cout << "Stack is overflow" << endl;
        } else {
            top2--;
            arr[top2] = data;
        }
    }

    void pop1() {
        if (top1 == -1) {
            cout << "Stack is empty" << endl;
        } else {
            arr[top1]  = 0;
            top1--;
        }
    }

    void pop2() {
        if (top2 == size) {
            cout << "Stack is empty" << endl;
        } else {
            arr[top2] = 0;
            top2++;
        }
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main () {
    Stack st(6);
    st.print();
    st.push1(10);
    st.print();

    st.push1(20);
    st.print();

    st.push2(100);
    st.print();

    return 0;
}
