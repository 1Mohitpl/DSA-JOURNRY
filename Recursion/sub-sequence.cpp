#include<iostream>
using namespace std;

int findsunSequence(string str, string output , int index){
           
           // base case 
           if(index>= str.length()){
            cout << output << endl;
           }

          

           char ch = str[index];

            // include
             output.push_back(ch);
             findsunSequence(str, output, index+1);

             //exclude

             output.pop_back(ch);
            findsunSequence(str, output, index+1);




}

int main (){

    string str = "abc";
    string output = "";
    int index = 0;


    findsunSequence(str, output, index); 
}