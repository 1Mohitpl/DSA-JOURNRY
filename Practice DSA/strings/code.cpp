#include<iostream>
using namespace std;

int findlength(char ch[], int size){
    int length = 0;
     for(int i = 0; i< size;i++){
        if(ch[i] == '\0'){
            break;
        } else {
            length++;
        }
     }
     return length;
}

void reverseString (char ch[], int n){
    int i = 0;
    int j = n-1;
    while(i<=j){
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

void convertToUpper(char ch[], int n ){
    int index = 0;
    while(ch[index] != '\0'){
        ch[index] = ch[index] -'a'+ 'A';
        index++;
    }
}

void replacewithSpace(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index] == '@'){
            ch[index] = ' ';
        }
        index ++;
    }
}

int main (){
     char ch[100];
    //  cin >> ch;   // single line of taking input 
    cout << "Enter an string : " << endl;
     cin.getline(ch, 100);
    
   


     cout << "printing the character array : " << ch <<endl; 
     cout << "length of the array :" << len << endl;  // not need of for loop for printing array
   cout << "before revrse the string" << " " << ch << endl;
    int len = findlength(ch, 100);
   reverseString(ch, len);
   cout << "after reverse the string " << ch <<endl;

   convertToUpper(ch, 100);
   cout << ch << endl;

   replacewithSpace(ch, 100);
   cout << ch <<endl;
}