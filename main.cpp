#include <iostream>
#include <cctype>

using namespace std;

bool isPalindrome(const string& str)
{
    string lowercaseStr;

    for (char c : str)
    {
        lowercaseStr += tolower(c);
    }

    for (size_t i = 0, j = lowercaseStr.length() - 1; i < j; ++i, --j)
    {
        if (lowercaseStr[i] != lowercaseStr[j])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << "Enter a string consisting solely of letters(no spaces, numbers, or special characters): ";
    string input;
    cin >> input;

    if (isPalindrome(input))
    {
        cout << "The string is a palindrome" << endl;
    }
    else
    {
        cout << "The string isn't a palindrome" << endl;
    }

    return 0;
}
