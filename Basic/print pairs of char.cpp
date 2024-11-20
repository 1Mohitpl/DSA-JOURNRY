#include <bits/stdc++.h>
using namespace std;

// when print words in pair of string 
int main() {
	// your code goes here
	string word = "WORKATTECH";
	string pair = "";
	for(char ch : word){
		pair+= ch;
		if(pair.length() == 3){
			cout << pair << endl;
			pair = "";
		}
	
		
	}
	return 0;
}