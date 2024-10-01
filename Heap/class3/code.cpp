#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Info{
    public:
     int data;
     int rowindex;
     int collumindex;
    Info(int rowdata, int coldata, int val){
        this->data = val;
        this->rowindex = rowdata;
        this->collumindex = coldata;
    } 
};

class Compare{
    public:
    bool operator()(Info* rowdata, Info* coldata){
        return rowdata->data > coldata->data;
    }
};

void MergeKthsortedarray(int arr[][4], int n, int k, vector<int> &ans){
    priority_queue<Info*, vector<Info*>, Compare> pq;

    // Process first k elements
    for(int row = 0; row < k; row++){
        int element = arr[row][0];
        Info* temp = new Info(row, 0, element);
        pq.push(temp);
    }

    while(!pq.empty()){
        Info* temp = pq.top();
        pq.pop();
        int topdata = temp->data;
        int toprow = temp->rowindex;
        int topcol = temp->collumindex;

        // Store the data in ans vector
        ans.push_back(topdata);

        if(topcol + 1 < n){
            Info* newInfo = new Info(toprow, topcol+1, arr[toprow][topcol+1]);
            pq.push(newInfo);
        }
    }
}

int main(){
    int arr[3][4] = {
        {1, 4, 8, 11},
        {2, 3, 6, 10},
        {5, 7, 12, 14}
    };

    int n = 4;
    int k = 3;
    vector<int> ans;
    MergeKthsortedarray(arr, n, k, ans);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
