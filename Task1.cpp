#include<iostream>
using namespace std;
string tem, hum;
string decideActivity(string tem, string hum);
main(){
    string result;
    cout<<"Enter temperature (warm or cold): ";
    cin>>tem;
    cout<<"Enter humidity (dry or humid): ";
    cin>>hum;
    result=decideActivity(tem, hum);
    cout<<"Recommended activity: "<<result;

}
string decideActivity(string tem, string hum)
{
    string result;
    if(tem=="warm" && hum=="dry"){
        result="Play tennis";
    } 
    if(tem=="warm" && hum=="humid")
    {
        result="Swim";
    }
    if(tem=="cold" && hum=="dry")
    {
        result="Play basketball";
    }
    if(tem=="cold" && hum=="humid")
    {
        result="Watch TV";
    }
    return result;
}