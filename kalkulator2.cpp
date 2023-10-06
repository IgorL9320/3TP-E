#include <iostream>

using namespace std;
int main()
{
    unsigned short int r[9];
    int g, d;
    char o;
    for(;cin>>o>>g>>d;)
    {
        --g;
        switch(o)
        {
            case 'z':
                r[g]=d;
            break;

            case '+':
                cout<<r[g]+r[d-1]<<endl;
            break;

            case '-':
                cout<<r[g]-r[d-1]<<endl;
            break;

            case '*':
                cout<<r[g]*r[d-1]<<endl;
            break;

            case '/':
                cout<<r[q]/r[w-1]<<endl;
            break;

            case '%':
                cout<<r[q]%r[w-1]<<endl;
            break;
        }

    }
    return 0;
}

//IgorL
