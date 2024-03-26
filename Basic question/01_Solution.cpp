#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter an number : " << endl;              //sum of even numbers in the given number
    cin >> num;
    int sum = 0;
    
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    cout << "Sum of even numbers in the given number is  :" << sum << endl;
}