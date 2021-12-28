#include<iostream>
using namespace std;
bool leapchecker(int year1 );
int countleap(int start ,int end);
main()
{
    int year1;
    int year2;
    cout<<"enter 1st value :"<<endl;
    cin >> year1;
    cout<<"enter 2nd value :"<<endl;
    cin >> year2;
    cout<< countleap(year1 , year2);
}
bool leapchecker(int year1)
{
    if(year1 % 4 == 0 && year1 % 100 == 0 && year1 % 400 == 0)
    {
        return 1;

    }
    else if(year1 % 4 == 0 && year1 % 100 != 0)
    {
        return 1;
    } 
    else
    {
       
        return 0;
    } 

}
int countleap(int start , int end)
{
    int count=0;
    if(leapchecker(start))
    {
        count=count+1;
    }
    if(leapchecker(start+1))
    {
        count=count+1;
    }
    if(leapchecker(start+2))
    {
        count=count+1;
    }
    if(leapchecker(start+3))
    {
        count=count+1;
    }
    if(leapchecker(start+4))
    {
        count=count+1;
    }
    if(leapchecker(start+5))
    {
        count=count+1;
    }
    if(leapchecker(start+6))
    {
        count=count+1;
    }
    if(leapchecker(start+7))
    {
        count=count+1;
    }
    if(leapchecker(start+8))
    {
        count=count+1;
    }
    if(leapchecker(start+9))
    {
        count=count+1;
    }
    return count;
}
