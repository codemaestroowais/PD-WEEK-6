#include<iostream>
#include<windows.h>
using namespace std;
string checkPointPosition (int height, int xcoor, int ycoor);
main()
{
    int height;
    int xcoor;
    int ycoor;
    cout<<"Enter height: ";
    cin>>height;
    cout<<"Enter x coordinate: ";
    cin>>xcoor;
    cout<<"Enter y coordinate: ";
    cin>>ycoor;
    cout<<checkPointPosition (height, xcoor, ycoor);
}
string checkPointPosition (int height, int xcoor, int ycoor)
{
    string position;
    if((xcoor<3*height) && (ycoor<height))
    {
        position="Inside";
    }
    else if((xcoor>height && xcoor<2*height) && ycoor<4*height)
    {
        position="Inside";
    }
    else if(xcoor==0 && ycoor==0)
    {
        position="Border";
    }
    else if(xcoor==0 && ycoor==height)
    {
        position="Border";
    }
    else if(xcoor==height && ycoor==height)
    {
        position="Border";
    }
    else if(xcoor==2*height && ycoor==height)
    {
        position="Border";
    }
    else if(xcoor==3*height && ycoor==height)
    {
        position="Border";
    }
    else if(xcoor==3*height && ycoor==0)
    {
        position="Border";
    }
    else if(xcoor==height && ycoor==3*height)
    {
        position="Border";
    }
    else if(xcoor==height && ycoor==4*height)
    {
        position="Border";
    }
    else if(xcoor==2*height && ycoor==2*height)
    {
        position="Border";
    }
    else if(xcoor==2*height && ycoor==3*height)
    {
        position="Border";
    } 
    else if(xcoor==2*height && ycoor==4*height)
    {
        position="Border";
    }
    else{
        position="Outside";
    }
    return position;
}