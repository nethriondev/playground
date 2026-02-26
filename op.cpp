#include <iostream>
using namespace std;

int main()
{
    int option, num;
    cout << "SELECT OPTIONS" << endl;
    cout << "1. Fibonacci" << endl;
    cout << "2. Palindrome" << endl;
    cout << "3. Factorial" << endl;
    cout << "4. PRIME" << endl;
    cout << "5. Experiment 4 DIGIT Number" << endl;
    cin >> option;

    if (option == 1)
    {
        cout << "How many terms? ";
        cin >> num;

        int a = 0, b = 1;

        for (int i = 1; i <= num; i++)
        {
            cout << a << " ";
            int next = a + b;
            a = b;
            b = next;
        }
    }
    else if (option == 2)
    {
        int num;
        cout << "Enter num: ";
        cin >> num;

        int rev = 0;
        int original = num;

        while (num > 0)
        {
            rev = (rev * 10) + num % 10;
            num /= 10;
        }

        cout << "Reverse: " << rev << endl;
        if (rev == original)
        {
            cout << "Palindrome!";
        }
        else
        {
            cout << "Not Palindrome!";
        }
    }
    else if (option == 3)
    {
        cout << "Enter num: ";
        cin >> num;
        int fact = 1;

        for (int i = 1; i <= num; i++)
        {
            fact*=i;
            cout << i;
            if (i < num)
            {
                cout << "x";
            }
        }
        cout << "=" << fact << endl;
    }
    else if (option == 4)
    {
        cout << "Enter num: ";
        cin >> num;
        int count = 0;

        for (int i = 1; i <= num; i++)
        {
            if (num %i==0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            cout << "PRIME";
        }
        else
        {
            cout << "NOT PRIME";
        }
    }
    else if (option == 5)
    {
        cout << "Enter 4 digit num: ";
        cin >> num;

        if (num < 1000 || num > 9999)
        {
            cout << "Invalid! Please enter a 4 digit number!";
            return 1;
        }

        int f, s, t, l;
        int fs, tl, st,stl, fst;
        int mul;
        f=num/1000;
        s=(num/100)%10;
        t=(num/10)%10;
        l=num%10;

        cout << "FIRST: " << f << endl;
        cout << "SECOND: " << s << endl;
        cout << "THIRD: " << t << endl;
        cout << "LAST: " << l << endl;

        fs=num/100;
        tl=num%100;
        st=(num/10)%100;

        cout << "First 2 Digit: " << fs << endl;
        cout << "Middle 2 Digit: " << st << endl;
        cout << "Last 2 Digit: " << tl<< endl;

        stl=num%1000;
        fst=num/10;
        mul=f*stl;
        cout << f << "x" << stl << "=" << mul << endl;
        mul=fst*l;
        cout << fst << "x" << l << "=" << mul << endl;

    }
    else
    {
        cout << "Invalid Choices! ";
    }

    return 0;
}