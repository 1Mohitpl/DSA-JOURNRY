#include<iostream>
#include<vector>
using namespace std;


bool isequal(vector<int>&v){
      // get the total sum
      int totalsum = 0;
       for(int i = 0; i<v.size(); i++){
            totalsum += v[i];
       }

      int prefixsum = 0;
      for(int i=0; i<v.size(); i++){
           prefixsum += v[i];
           int suffixsum = totalsum - prefixsum;
           if(suffixsum == prefixsum){
            return true;
           }
      }
      return false;
}

int main () {

    int n;
    cout << "Enter the size of the array :" << endl;
    cin >> n;
    vector<int>v;

    for(int i = 0; i<n;  i++){
        int element;
        cout << "Enter the array value :" << endl;
        cin >> element;
        v.push_back(element);
    }

    cout << isequal(v) << endl;
    
}








































































// // prefix sum 
// #include<iostream>
// #include<vector>
// using namespace std;

//   void  runningSum(vector<int>&v){
//       for(int i = 1; i<v.size();  i++){
//          v[i]+= v[i-1];
//       }
//       return;
//   }


// int main(){
//    int n;
//    cout << "Enter a size of array :" << endl;
//    cin>>n;
//    vector<int>v;

//    for(int i = 0; i<n; i++){
//         int element;
//         cout << "Enter the elements :" <<endl;
//         cin >> element;
//         v.push_back(element);
//    }

//      runningSum(v);

//      for(int i =0; i<n; i++){
//          cout << v[i] << " ";
//      } 
//      cout << endl;
// }