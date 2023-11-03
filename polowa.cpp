#include <iostream>
#include <stdio.h>

using namespace std;

char characters[50000];

int main()
{
    char g;
    int i=0,j,k=0,l=0;
    cin>>i;
    for(j=0;j<=i;++j)
    {
        g=getchar();
        for(k=0;g==1, g != '\n';++k)
        {
            characters[k]=g;
            g=getchar();
        }
        characters[k]='\0';
        for(k=0;characters[k]!='\0';++k)
        {
            ++l;
        }
        l=l/2;
        for(k=0;k<l;++k)
        {
            cout<<characters[k];
        }
        l=0;
        cout<<endl;
    }

//IgorL
