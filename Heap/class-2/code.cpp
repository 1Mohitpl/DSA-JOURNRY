#include<iostream>
#include<queue>
using namespace std;


int main(){
    // create a max heap 

    priority_queue<int>pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "top element : " << pq.top() << endl;
    pq.pop();
    cout << "top element : " << pq.top() << endl;
    

}