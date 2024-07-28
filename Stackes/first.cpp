// // find the middle element of the stack 


// #include<iostream>
// #include<stack>
// using namespace std;


// void solve(stack<int> &st, int &pos, int &ans){
//      //base case
//      if (pos == 1)
//      {
//           ans = st.top();
//           return ;
//      }
//      // 1 case solve left recurrsion will solve 
//      pos --;
//      int temp = st.top(); 
//      st.pop();

//      //recurrsion 
//      solve(st, pos, ans );

//      //backtracing

//      st.push(temp);
     
// }

// int getMiddleElement(stack<int>&st){
//      int size = st.size();

//      if (st.empty())
//      {
//           return -1;
//      } else{
//           int pos = 0;
//           //odd
//           if(size & 1){
//                pos = size/2 +1;
//           } else{
//                //even 
//                pos = size/2;

//           }
//           int ans = -1;
//           solve(st, pos, ans);
//           return ans;
//      }
     
// }







// int main(){
//      stack<int> st;
//      st.push(10);
//      st.push(20);
    

//      int mid = getMiddleElement(st);
//      cout << "middle element :" << mid << endl;
// }




















// reverse the string;

// #include<iostream>
// #include<stack>
// using namespace std;

// int main () {
//      string str  = "mohit is the";
//      stack<char>st;

//      for (int i = 0; i < str.length(); i++)
//      {
//           char ch = str[i]; // store each element of string in variable ch
//           st.push(ch);  // now push into the stack
//      }

//      while (!st.empty())
//      {
//            cout << st.top() << " ";
//            st.pop();
//      }
//      cout << endl;
//      return 0;
// }

























#include<iostream>
using namespace std;

 class stack {
    public :
     
      int *arr;
      int size ;
      int top; 


      stack (int size) {
           arr = new int [size];
           this->size = size;
           this->top = -1;
             
      }

      void push (int data) {
        if ( top == size -1) {

          cout << "stack is overflow" << endl;
          return;

        }
        else {
             top ++ ;
          arr [top] = data; 
        }
        
      }

      void pop () {
         if (top == -1) {

           cout << "stack is underflow" << endl;
           return;

         }
         else{
             
             top --;
         }
         
      }

      bool isempty () {
          if (top == -1) {
               return true;
          }
          else {
                return false;
          }
      }

      int getTop () {

          if (top == -1 ) {

               cout << "stack is empty" << endl;
               return -1;
          } 
          else{
                
                  return arr [top] ;

          }
          

      }

       int getSize () {
         
           return top +1;
       }

       void print () {
        cout <<"Top" << top << endl;
        cout << "Top element :" << getTop() << endl;
        cout << "stack :" ;

        for (int i = 0; i < getSize (); i++)
        {
           cout << arr[i]  << "  " << endl;
        }
         cout << endl << endl;
       }
 };

int main () {
  
  stack st (8) ;   // stack creation

  st.push (23);
  st.print();

  st.push(39);
  st.print();


  st.push(40);
  st.print();

 st.pop();
 st.print();
}


























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