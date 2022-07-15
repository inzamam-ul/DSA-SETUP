#include <bits/stdc++.h>
using namespace std;

string decodeMessage(string key, string message)
{

    unordered_map <char, char> keyValue;
    string mess;

    int letter = 97;
    for (int i = 0; i < key.size(); i++)
    {
        if ((keyValue.find(key[i]) == keyValue.end()) && key[i] != ' ')
        {
            keyValue[key[i]] = (char)letter;
            letter++;
        }
    }
    for (auto it : message)
    {
        if(it == ' ') mess += ' ';
        else
            mess += keyValue[it];
    }

    return mess;
}

int main(int argc, char const *argv[])
{
    string key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv";
    string mess = decodeMessage(key, message);
    // unordered_map<int, int> keyValue;
    // for (int i = 0; i < 26; i++)
    // {
    //     keyValue[i] = 'a' + i;
    // }
    for (auto it : mess)
    {
        cout << it;
    }


    return 0;
}
