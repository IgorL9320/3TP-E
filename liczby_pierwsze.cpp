#include <iostream>

using namespace std;

int main()
{
int g, i;
cin>>g;
for (int j=0; j<g; ++j)
{
    cin>>i;
    if (i==1) {cout<<"nie"<<endl;}
    if (i==2) {cout<<"tak"<<endl;}

        int l;
        for(l=2; l<i; ++l)
        {
            if ((i%l) == 0)
            {
                cout<<"nie"<<endl;
                break;
            }
            if (l == (i-1))
            {
                cout<<"tak"<<endl;
            }
        }
}
    return 0;
}
