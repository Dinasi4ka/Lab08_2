// Lab08_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int MaxLen(const string s)
{
    int k = 0;
    size_t len = 0,
        max = 0;
    size_t start = 0,
        finish;
    while ((start = s.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", start)) != -1)
    {
        finish = s.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", start + 1);
        if (finish == -1)
            finish = s.length();

        len = finish - start;
        if (k == 0)
            max = len;
        k++;
        if (len > max)
            max = len;
        start = finish + 1;
    }
    return max;
}
int main()
{
    string s;
    int len = 0;
    cout << "Enter string:" << endl;
    getline(cin, s);
    cout << "Length of max word: " << MaxLen(s) << endl;
    return 0;
}

