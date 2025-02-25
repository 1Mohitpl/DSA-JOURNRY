#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    // define construtor

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

   void push1(int data) {
        if(top1 - top2 == 1){
            cout << "overflow" << endl;
        } else {

            top1++;
            arr[top1] = data;
        }
   }

   void push2 (int data) {
      if(top1 - top2 == -1){
            cout << "overflow" << endl;
          
      } else {
        top2--;
        arr[top2] = data;
      }
   }

    void pop1(int data) {
        // first check if data is here or not
        if(top1 == -1){
            cout << "underflow" << endl;
        } else {
            arr[top1] = 0;
            top1--;
        }
    }


    void pop2(int data) {
        // check data
        if(top2 == size) {
            cout << "stack is empty" << endl;
        } else {
             arr[top2] = 0;
             top2++;
        }
    }

    void print() {

        cout << top1 << endl;
        cout << top2 << endl;
        for(int i = 0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main() {
     
    Stack st(6);
    st.push1(10);
    st.push2(20);
    st.push2(30);
    st.push1(40);
    st.push1(50);
    st.push2(60);
    st.print();
}