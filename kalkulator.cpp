#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char i;
    int g, d;
    while (!(cin >> i).eof())
    {
        cin>>g>>d;
        switch(i)
        {
            case '+':
                cout<<g+d<<endl;
                break;
            case '-':
                cout<<g-d<<endl;
                break;
            case '*':
                cout<<g*d<<endl;
                break;
            case '/':
                cout<<g/d<<endl;
                break;
            case '%':
                cout<<g%d<<endl;
                break;
        }
    }
    return 0;
}
//IgorL
