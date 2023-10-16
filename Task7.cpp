#include<iostream>
using namespace std;
string checkStudentStatus(int hour, int minutes, int arrivalHours, int arrivalMin);
main()
{
    int hour, minutes, arrivalHours, arrivalMin;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>hour;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>minutes;
    cout<<"Enter Student hour of arrival: ";
    cin>>arrivalHours;
    cout<<"Enter Student minutes of arrival: ";
    cin>>arrivalMin;
    cout<< checkStudentStatus( hour, minutes, arrivalHours, arrivalMin);
}
string checkStudentStatus(int hour, int minutes, int arrivalHours, int arrivalMin)
{
    int startingTime=(hour*60)+minutes;
    int arrivalTime=(arrivalHours*60)+arrivalMin;
    int resultTime=startingTime-arrivalTime;
    int resultTime1=arrivalTime-startingTime;
    int resultHour=resultTime/60;
    int resultMin=resultTime%60;
    int resultH=hour-arrivalHours;
    int resultM=minutes-arrivalMin;
    int resultH3=arrivalHours-hour;
    int resultM3=arrivalMin-minutes;
    string ans;
    if(resultTime>60)
    {
    ans= "Early\nTest: "+ to_string(resultTime)+ "\n"+to_string(resultH)+":"+to_string(resultM)+" hours before the start" ;
    
    }
    if(resultTime>30 && resultTime<60)
    {
    ans= "Early\nTest: "+ to_string(resultTime)+ "\n"+to_string(resultTime)+" minutes before the start";
    }
    if(resultTime<=30)
    {
    ans="On Time\nTest: "+ to_string(resultTime)+ "\n"+to_string(resultTime)+" minutes before the start";
    }
    if(resultTime==0)
    {
    ans= "On Time";
    }
    if(resultTime<0 && resultTime>-60)
    {
    ans="Late\nTest: "+ to_string(resultTime1)+ "\n"+to_string(resultTime1)+" minutes after the start";
    }
    if(resultTime<=-60)
    {
    ans="Late\nTest: "+ to_string(resultTime1)+ "\n"+to_string(resultH3)+":"+to_string(resultM3)+" hours after the start";
    }
    return ans;
}
