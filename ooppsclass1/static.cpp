#include<iostream>
using namespace std;

class  Abc{

    public:
   static int x, y;    // declare here static memeber that share thire memory with all instances
    void print () const {

        // this pointer

        cout << x << " " << y <<endl;

    }
}; 


int Abc :: x;
int Abc :: y;

int main() {

    // Abc man1 = {2,4};
    // Abc man2 = {6,9};

    // man1.print();
    // man2.print();
   

   Abc obj1;
   Abc obj2;
   obj1.x = 1;     
   obj1.y=2;            // share memeroy of the all the class instances
   obj1.print();
   obj2.print();

//    Abc obj2;
//    obj2.x = 4;
//    obj2.y = 5;
//    obj1.print();
//    obj2.print();


}