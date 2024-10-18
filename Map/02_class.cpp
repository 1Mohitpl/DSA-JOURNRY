#include<iostream>
using namespace std;

class Trienode{
    public:
    char value;
    Trienode* children[26];
    bool isterminal;

    Trienode(char val){
        this->value = val;
        for(int  i = 0; i<26; i++){
            children[i] = NULL;
        }
        this->isterminal = NULL;
    }
};

void insertword(Trienode* root, string word){
    cout << " recived word :" << word << "for insertion " << endl;
    // base case
    if(word.length() ==0){
        root->isterminal = true;
        return;

    }

    char ch = word[0];
    int index = ch -'a';
    Trienode* child;
    if(root->children[index] != NULL){
        // present 
        child = root->children[index];
    } else{
         // absent
         child = new Trienode(ch);
         root->children[index] = child;
    }
    // recursion 
    insertword(child, word.substr(1));
}


bool searchword(Trienode* root, string word){
     if(word.length() == 0){
        return root->isterminal;
     }

     char ch = word[0];
     int index = ch - 'a';
     Trienode* child;

     if(root->children[index] != NULL){
        // present
        child = root->children[index];
     } else{
         // not found
         return false;
     }

     // rest recursion 
     bool ans = searchword(child, word.substr(1));
     return ans;
}

void deleteword(Trienode* root, string word){
     if(word.length == 0){
        root->isterminal = false;
        return;
     }
     char ch = word[0];
     int index = ch - 'a';
     Trienode* child;

    if(root->children[index] != NULL){
         // preasent
         child = root->children[index];   // to reach that element
    } else {
        return;
    }

    deleteword(child, word.substr[1]);
}

int main (){
   Trienode* root = new Trienode('#');
    insertword(root, "donation");

}