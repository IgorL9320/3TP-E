#include <iostream>
#include <cstdio>

using namespace std;

int nwd (int g, int d)
{
    int c;
    for(;d!=0;)
    {
        c=g;
        g=d;
        d=c%d;
    }
    return g;
}

int main()
{
    int i, j=0,g,d;
    cin>>i;
    for(j;j<i;++j)
    {
        cin>>g>>d;
        cout<<nwd(g,d)<<endl;
    }
    return 0;
}

//IgorL
