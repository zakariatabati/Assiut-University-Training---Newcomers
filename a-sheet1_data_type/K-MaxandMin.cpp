#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define lol long long int
#define endl '\n'
void solution1()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    if (num1 >= num2 && num1 >= num3)
    {
        if (num2 > num3)
        {
            cout << num3 << " " << num1 << endl;
        }
        else
        {
            cout << num2 << " " << num1 << endl;
        }
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        if (num1 > num3)
        {
            cout << num3 << " " << num2 << endl;
        }
        else
        {
            cout << num1 << " " << num2 << endl;
        }
    }
    else if (num3 >= num2 && num3 >= num1)
    {
        if (num1 > num2)
        {
            cout << num2 << " " << num3 << endl;
        }
        else
        {
            cout << num1 << " " << num3 << endl;
        }
    }
}
void solution2()
{
    int num1, num2, num3, max_, min_;
    cin >> num1 >> num2 >> num3;

    min_ = min(num1, min(num2, num3));
    max_ = max(num1, max(num2, num3));
    
    cout << min_ << " " << max_ << endl;
}
int main()
{
    solution2();
}