#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int wordCount(string s){
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }
    return count + 1;
    
}

int main()
{
    // taking input
    string i;
    cout<<"enter string :";
    getline(cin, i);

    cout<<wordCount(i);
}