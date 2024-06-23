#include <iostream>
using namespace std;

// difin function

bool ispalindrom(int x)
{
    if (x < 0)
    {
        return false;
    }

    int temp;
    temp = x;
    int reverseNum = 0;
    int digit;
    while (x > 0)
    {
        digit = x % 10;                          // find it last digit
        reverseNum = (reverseNum * 10) + digit; // put that digit into the reversenum
        x = x/ 10;
    }

    if (temp == reverseNum)
    {
        return true;
    } else{
        return false;
    }
    
   
}

int main()
{
    int x;
    cout << "Enter an input number :" << endl;
    cin >> x;

  int ans = ispalindrom(x);
    if (ans == 1)
    {
        cout << "the number is palindrom" << endl;
    }
    else
    {
        cout << "Number is not a palindrom number" << endl;
    }
}