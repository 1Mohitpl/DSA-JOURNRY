#include<iostream>
#include<queue>
using namespace std;


int getKthsmllestElement(int arr[], int n, int k){
      priority_queue<int> pq;
    // process the first k element from the array
    for(int i = 0; i<k; i++){
        int element = arr[i];  // take each element 
       pq.push(element);
    }

    // push remening element if laser than top element
    for( int i =k; i<n; i++){
        int element = arr[i];
        if(element < pq.top()){
            // delete that top element 
            pq.pop();
            // now push the current element
            pq.push(element);

        }

    }

    // now fetch the kth element from the top
    int ans = pq.top();
    return ans;
}




int getKthgreatestElement(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>>pq;
    // process the first k element from the array
    for(int i = 0; i<k; i++){
        int element = arr[i];  // take each element 
       pq.push(element);
    }

    // push remening element if laser than top element
    for( int i =k; i<n; i++){
        int element = arr[i];
        if(element > pq.top()){
            // delete that top element 
            pq.pop();
            // now push the current element
            pq.push(element);

        }

    }

    // now fetch the kth element from the top
    int ans = pq.top();
    return ans;
}

int main () {
    int arr[] = {3,5, 4, 6, 9, 8, 7};
    int n = 7;
    int k = 3;
    int result1 = getKthsmllestElement(arr, n, k);
    cout << result1 <<endl;

    int result2 = getKthgreatestElement(arr, n, k);
    cout << result2 <<endl;
    

}


































































































// #include<iostream>
// #include<queue>
// using namespace std;


// int main(){
//     // create a max heap 

//     priority_queue<int>pq;
//     pq.push(10);
//     pq.push(30);
//     pq.push(20);

//     cout << "top element : " << pq.top() << endl;
//     pq.pop();
//     cout << "top element : " << pq.top() << endl;


// // min-heap creation
// priority_queue<int, vector<int>, greater<int>>pq;
  
    


// }