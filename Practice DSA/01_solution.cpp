#include <iostream>

using namespace std;

bool checkprimeornot(int n)
{ // check the number is prime number or not a prime number

    if (n == 2)
    {
        return true;
    }

    if (n % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    int n;
    cout << "Enter a number here : " << endl;
    cin >> n;
    bool ans = checkprimeornot(n);

    if (ans == 0)
    {
        cout << "Not a Prime nuber" << endl;
    }
    else
    {
        cout << "prime number" << endl;
    }
}

#include <iostream>
using namespace std;

bool checkNumber(int n)
{

    if (n % 2 == 0)
    { // check the number is even or odd
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int n;
    cout << "Enter an numer here : " << endl;
    cin >> n;

    bool ans = checkNumber(n);

    if (ans == 1)
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
}

#include <iostream>
using namespace std;

int sumofEvennumbers(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i++)
    { // sum of all even numbers 1 to N
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{

    int n;
    cout << "Enter an number here : " << endl;
    cin >> n;
    int ans = sumofEvennumbers(n);
    cout << "sum of all even numbers : " << ans << endl;
}

#include <iostream>
using namespace std;

int sumofnumbers(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

// sum of all numbers upto N

int main()
{

    int n;
    cout << "Enter an number : " << endl;
    cin >> n;

    int ans = sumofnumbers(n);
    cout << "sum of all numbers upto N : " << ans << endl;
}