#include<iostream>
using namespace std;
int calculateVolleyballGames(string year, int holidays, int weekends);
main()
{
    string year;
    int holidays;
    int weekends;
    cout<<"Enter year type: ";
    cin>>year;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>weekends;
    cout<<calculateVolleyballGames(year, holidays, weekends);
}
int calculateVolleyballGames(string year, int holidays, int weekends)
{
    int normal=48-weekends;
    float GameTime=(normal*(3.0/4.0))+((48-normal))+holidays*(2.0/3.0);    
    if (year=="leap")
    {
        GameTime*=1.15;
    }
    return GameTime;
}
