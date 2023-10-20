#include <iostream>

using namespace std;

int main()
{
    int g, d;
    int tab [100];
    cin>>g;
    for(int i=0; i<g; ++i)
    {
        cin>>d;
        for(int j=0; j<d; ++j)
        {
            cin>>tab[j];
        }
        for(int j=1; j<d; ++j)
        {
            cout<<tab[j]<<" ";
        }
        cout<<tab[0]<<endl;
    }

return 0;
}


//IgorL
