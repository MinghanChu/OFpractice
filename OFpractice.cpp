#include <iostream>
#include <vector>
#include <string>

using namespace std;
//Minghan added a new line
//new thing
int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}