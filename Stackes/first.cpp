#include<iostream>
#include<stack>
using  namespace std;


int main () {

     string str = "Mohitpaul";
     stack <char> st;
     

     for (int i = 0; i < str.length(); i++)
     {
        char ch = str[i];
        st.push(ch);


     }

     cout << endl;

     while (!st.empty()) {
         
          cout << st.top() ;

          st.pop ();

        
     }
    
     cout << endl;
     

}


























// #include<iostream>
// using namespace std;

//  class stack {
//     public :
     
//       int *arr;
//       int size ;
//       int top; 


//       stack (int size) {
//            arr = new int [size];
//            this->size = size;
//            this->top = -1;
             
//       }

//       void push (int data) {
//         if ( top == size -1) {

//           cout << "stack is overflow" << endl;
//           return;

//         }
//         else {
//              top ++ ;
//           arr [top] = data; 
//         }
        
//       }

//       void pop () {
//          if (top == -1) {

//            cout << "stack is underflow" << endl;
//            return;

//          }
//          else{
             
//              top --;
//          }
         
//       }

//       bool isempty () {
//           if (top == -1) {
//                return true;
//           }
//           else {
//                 return false;
//           }
//       }

//       int getTop () {

//           if (top == -1 ) {

//                cout << "stack is empty" << endl;
//                return -1;
//           } 
//           else{
                
//                   return arr [top] ;

//           }
          

//       }

//        int getSize () {
         
//            return top +1;
//        }

//        void print () {
//         cout <<"Top" << top << endl;
//         cout << "Top element :" << getTop() << endl;
//         cout << "stack :" ;

//         for (int i = 0; i < getSize (); i++)
//         {
//            cout << arr[i]  << "  " << endl;
//         }
//          cout << endl << endl;
//        }
//  };

// int main () {
  
//   stack st (8) ;   // stack creation

//   st.push (23);
//   st.print();

//   st.push(39);
//   st.print();


//   st.push(40);
//   st.print();

//  st.pop();
//  st.print();
// }


























// #include<iostream>
// #include<stack>
// using namespace std;
// int main () {

//      // stack creation

//      stack<int>st;

//      // stack insertion 

//      st.push(20);
//      st.push(50);
//      st.push(69);

//      cout << "size of the given stack" << st.size() << endl;


//      st.pop();   // stack remove
 
//           cout << "size of the given stack" << st.size() << endl;
// }