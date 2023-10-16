#include<iostream>
using namespace std;
float cellularCompany(char code, char time, float minutes);

main()
{   
    char code;
    char time;
    float minutes;
    float ans;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>code;
    if(code!='P'&& code!='p' && code!='R' && code!='r')
    {
        cout<<"Error";
        return 0;
    }
    
    else if(code=='P' || code=='p')
    {
    cout<<"Enter time of the call (D/d for day, N/n for night): ";
    cin>>time;
    if(time!='D' && time!='d' && time!='N' && time!='n')
    {
        cout<<"Error";
        return 0;
    }
    }

    cout<<"Enter the number of minutes used: ";
    cin>>minutes;
    if(code=='p' || code=='P')
    {
    cout<<"Service Type: Premium"<<endl;
    }
    if(code=='r' || code=='R')
    {
        cout<<"Service Type: Regular"<<endl;
    }
    cout<<"Total Minutes Used: "<<minutes<<" minutes"<<endl;
    ans=cellularCompany(code, time, minutes);
    cout<<"Amount Due: $"<<ans;
}
float cellularCompany(char code, char time, float minutes)
{
    float amount;
    float ans;
    if((code=='R' || code=='r') && minutes<=50){
        amount=10;
        ans=amount;
    }
    else if((code=='R' || code=='r') && minutes>50){
        amount=((minutes-50)*0.2)+10;
        ans=amount;
    }
    else if((code=='P' || code=='p') && (time=='D' || time=='d') && minutes<=75){
        amount=25;
        ans=amount;
    }
    else if((code=='P' || code=='p') && (time=='N' || time=='n') && minutes<=100){
        amount=25;
        ans=amount;
    }
    else if((code=='P' || code=='p') && (time=='N' || time=='n') && minutes>100){
        amount=((minutes-100)*0.05)+10;
        ans=amount;
    }
    else if((code=='P' || code=='p' )&& (time=='D' || time=='d') && minutes>75)
    {
        amount=((minutes-75)*0.1)+10;
        ans=amount;
    }
    return ans;
}

