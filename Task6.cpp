#include<iostream>
using namespace std;
string calculateHotelPrice (string month, int numberOfStays);
string calculateapartment(string month, int numberOfStays);
main()
{
    string month;
    int numberOfStays;
    float studio;
    float apartment;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>numberOfStays;
    cout<<calculateHotelPrice ( month, numberOfStays);
}
string calculateHotelPrice (string month, int numberOfStays)
{
    float studio;
    float apartment;
    if((month=="May" || month=="October") && numberOfStays<=7)
    {
        studio=50*numberOfStays;
    }
    else if((month=="May" || month=="October") && (numberOfStays>7 && numberOfStays<=14))
    {
        studio=(50*numberOfStays)-((50*numberOfStays)*0.05);
    }
    else if((month=="May" || month=="October") && numberOfStays>14)
    {
        studio=(50*numberOfStays)-((50*numberOfStays)*0.3);
    }
    else if((month=="June" || month=="September") && numberOfStays>14)
    {
        studio=(50*numberOfStays)-((50*numberOfStays)*0.2);
    }
    else if((month=="June" || month=="September") && numberOfStays<=14)
    {
        studio=75.20*numberOfStays;
    }
    else if(month=="July" || month=="August")
    {
        studio=76.0*numberOfStays;
    }
    if((month=="May" || month=="October") )
    {
        apartment=65.0*numberOfStays;
    }
    
    else if((month=="June" || month=="September") )
    {
        apartment=68.70*numberOfStays;
    }
    
    else if((month=="July" || month=="August"))
    {
        apartment=77.0*numberOfStays;
    }
    if (numberOfStays>14)
    {
        apartment=apartment-(apartment*0.10);
    }
    
    
   
    return "Appartment: "+ to_string(apartment)+ "$.\nStudio: "+to_string(studio) + "$.";
}

