#include <iostream>

using namespace std;

int main()
{
    string str = "while";
    int i = 0;
    while (str[i] != '\0')
    {
        cout << str[i] << endl;
        i++;
    }

    bool a = true;
    bool b = false;

    while (a)
    {
        cout << "a is true" << endl;
        a = false;
    }

    while(0)
    {
        cout << "0 is false" << endl;
        break;
    }

    while(2)
    {
        cout << "1 이상은 전부 true" << endl;
        break;
    }
    
    


    i = 0;
    do
    {
        /* code */
        cout << "do while" << endl;
        i++;

    } while (i < 3);
    

    return 0;
}