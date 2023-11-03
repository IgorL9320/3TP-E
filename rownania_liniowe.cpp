#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double g, d, c;
    for(;cin>>g>>d>>c;)
    {
        if(g==0 && (c-d)==0)
        {
            cout<<"NWR"<<endl;
            continue;
        }
        if(g==0 && (c-d)>0)
        {
            cout<<"BR"<<endl;
            continue;
        }
        if((c-d)==0)
        {
            cout<<"NWR"<<endl;
            continue;

        }
        else
        {
            cout<<fixed;
            cout<<setprecision(2)<<(c-d)/g<<endl;
            continue;
        }
    }
    return 0;
}

//IgorL
