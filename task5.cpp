#include<iostream>
using namespace std;
void calyears(int year); //calyear mean calculate years 
main()//main function
{
    int year;
    cout<<"enter year:"<<endl;
    cin >> year;
    calyears(year);//function calling
} 
void calyears(int year)
{
    int cyear=0; //cyear mean cat year
    int dyear=0; //dyear mean dog year
    if(year == 1)
    {
        cyear=15;
        dyear=15;
        cout<<"cat year:"<<cyear<<endl;
        cout<<"dos year:"<<dyear<<endl;

    }
    else if(year == 2)
    {
        cyear=15+9;
        dyear=15+9;
        cout<<"cat year:"<<cyear<<endl;
        cout<<"dog year:"<<dyear<<endl;
    }
    else if(year > 2)
    {
        cyear=24;
        dyear=24;
        int year1=year-2;
        year1=year1*4;
        cyear=24+year1;
        int year2=year-2;
        year2=year2*5;
        dyear=24+year2;
        cout<<"cat year:"<<cyear<<endl;
        cout<<"dos year:"<<dyear<<endl;
    }
    
}