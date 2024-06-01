#include<iostream>
using namespace std ;

int sqroot(int x){
    int start = 0;
    int end = x;
    int ans = -1;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if (mid*mid ==x)
        {
            return mid;
        } else if (mid*mid < x)
        {   
             ans = mid;
             start = mid+1;    
        } else{
            end = mid-1;
        }
        
        
    }
    return ans;
}

int main() {

    int x;
    cout << "Enter a number :" << endl;
    cin >> x;

    int result = sqroot(x);
    cout << "root of given number is : " << result << endl;
    
    

}