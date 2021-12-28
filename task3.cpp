#include<iostream>
using namespace std;
string leapchecker(int year);
main()
{
    int years;
    cout<<"enter year :"<<endl;
    cin >> years;
    string result=leapchecker(years);
    cout<<years << "is a "<<result;

}
string leapchecker(int year)
{
    string result;
    if(year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
    {
        result = "leap year";
        return result;

    }
    else if(year % 4 == 0 && year % 100 != 0)
    {
        result="leap year:";
        return result;
    } 
    else
    {
        result = "not leap year:";
        return result;
    }
    
}
