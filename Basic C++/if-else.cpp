#include<iostream>
using namespace std;

int main()
{
    // if-else question - Take the point (x,y) as input and write a program to determine if it lies on the x-axis,y-axis or at the origin (0,0).

    int x,y;
    cout<<"First point x : ";
    cin>>x;
    cout<<"Second point y : ";
    cin>>y;

    if((x>0 || x<0) && y == 0) cout<<"("<<x<<","<<y<<") lies on the x-axis";
    else if((y>0 || y<0) && x == 0) cout<<"("<<x<<","<<y<<") lies on the y-axis";
    else if(x==0 && y==0) cout<<"("<<x<<","<<y<<") lies on the origin";
    else cout<<"("<<x<<","<<y<<")"<<" lies in a quadrant";
    
    return 0;
}