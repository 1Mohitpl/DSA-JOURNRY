#include <iostream>
using namespace std;

class Info
{
public:
    int maxval;
    bool isheap;

    Info(int a, bool b)
    {
        this->maxval = a;
        this->isheap = b;
    }
};

Info checkheap(Node *root)
{
    if (root == NULL)
    {
        Info temp;
        temp.maxval = INT_MIN;
        temp.isheap = true;
        return temp;
    }
    if (root->left == NULL && root->right == NULL)
    { // leaf nodes
        Info temp;
        temp.maxval = root->data;
        temp.isheap = true;
        return temp;
    }

    Info leftans = checkheap(root->left);
    Info rightans = checkheap(root->right);
    // 1 case solve karna hoga
    if (root->data > leftans.maxval && root->data > rightans.maxval && leftans.isheap && rightans.isheap)
    {
        Info ans;
        ans.maxval = root->data;
        ans.isheap = true;
        return ans;
    }
    else
    {
        Info ans;
        ans.maxval = max(root->data, max(leftans.maxval, rightans.maxval));
        ans.isheap = false;
        return ans;
    }
}

int main()
{
}
























































// #include<iostream>
// #include<queue>
// using namespace std;

// int getKthsmllestElement(int arr[], int n, int k){
//       priority_queue<int> pq;
//     // process the first k element from the array
//     for(int i = 0; i<k; i++){
//         int element = arr[i];  // take each element
//        pq.push(element);
//     }

//     // push remening element if laser than top element
//     for( int i =k; i<n; i++){
//         int element = arr[i];
//         if(element < pq.top()){
//             // delete that top element
//             pq.pop();
//             // now push the current element
//             pq.push(element);

//         }

//     }

//     // now fetch the kth element from the top
//     int ans = pq.top();
//     return ans;
// }

// int getKthgreatestElement(int arr[], int n, int k){
//     priority_queue<int, vector<int>, greater<int>>pq;
//     // process the first k element from the array
//     for(int i = 0; i<k; i++){
//         int element = arr[i];  // take each element
//        pq.push(element);
//     }

//     // push remening element if laser than top element
//     for( int i =k; i<n; i++){
//         int element = arr[i];
//         if(element > pq.top()){
//             // delete that top element
//             pq.pop();
//             // now push the current element
//             pq.push(element);

//         }

//     }

//     // now fetch the kth element from the top
//     int ans = pq.top();
//     return ans;
// }

// int main () {
//     int arr[] = {3,5, 4, 6, 9, 8, 7};
//     int n = 7;
//     int k = 3;
//     int result1 = getKthsmllestElement(arr, n, k);
//     cout << result1 <<endl;

//     int result2 = getKthgreatestElement(arr, n, k);
//     cout << result2 <<endl;

// }

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