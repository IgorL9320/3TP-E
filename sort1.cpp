#include <iostream>
#include <list>
#include <cmath>

using namespace std;

class Punkt
{
public:
    Punkt(string n,int pg,int pd):nazwa(n),g(pg),d(pd),modul(sqrt(g*g+d*d)){}
    string nazwa;
    int g;
    int d;
    int modul;
};

bool operator<(Punkt & P1, Punkt & P2)
{
    return P1.modul<P2.modul;
}

ostream & operator<< (ostream & os, Punkt & a)
{
    os << a.nazwa << " " << a.g << " " << a.d << endl;
    return os;
}

int main()
{
    list <Punkt> Lista;
    list <Punkt>::iterator itr;
    itr=Lista.begin();

    int t; cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n; cin>>n;
        for(int j=1;j<=n;j++)
        {
            string nazwa; cin>>nazwa;
            int g; cin>>g;
            int d; cin>>d;
            Punkt MojPunkt(nazwa,g,d);
            Lista.push_back(MojPunkt);
        }
        Lista.sort();
        for(itr=Lista.begin();itr!=Lista.end();++itr)
            cout << *itr;
        Lista.clear();
        cout << endl;
    }
    return 0;
}

//IgorL
