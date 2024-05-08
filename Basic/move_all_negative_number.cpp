#include <iostream>
using namespace std;
int moveNegative(int a[], int n){
    int l = 0;
    int h = n - 1;
    while (l < h)
    {
        if (a[l] < 0)
        {
            l++;
        }
        else if (a[h] > 0)
        {
            h--;
        }
        else
        {

            swap(a[l], a[h]);
        }
    }
}
int main()
{
    int a[] = {2, 1, -4, -6, 8 - 9, 10};
    int n = sizeof(a) / sizeof(int); // find out the size of an array
     moveNegative(a,n);
    for (int i = 0; i <n; i++)
    {
        cout << a[i] << endl;

    }

    cout << endl;
    
}