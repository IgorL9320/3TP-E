#include <iostream>

using namespace std;

int main()
{
    int g, d, x, y, i, j;
    cin>>g;
    for (i=0; i<g; ++i)
    {
        cin>>n>>x>>y;
        for (j=0; j<d; ++j)
        {
            if ((j%x == 0) && (j%y != 0))
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

//IgoeL
