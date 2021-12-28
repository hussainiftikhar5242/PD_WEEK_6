#include<iostream>
#include<cmath>
using namespace std;
long pv_cm(float length,float width,float height);
long pv_km(float length,float width,float height);
long pv_mm(long length,long width,long height);
main()
{
    float length,width,height;
    cout<<"enter lenght:";
    cin>>length;
    cout<<"enter width:";
    cin>> width;
    cout<<"enter height:";
    cin>> height;
    string unit;
    cout<<"enter unit:";
    cin>>unit;
    if(unit == "cm")//cm mean centimeter
    {
        long result=pv_cm(length,width,height);
        cout<<"volume of the pyramid:"<<result << "cubic centimeter:";
    }
    else if(unit == "km")
    {
        long result=pv_km(length,width, height);
        cout<<"volume of the pyramid:"<<result << "cubic kilometer";
    }
    else if(unit == "mm")
    {
        long result=pv_mm(length,width,height);
        cout<<"volume of the pyramid:"<<result <<"cubic milimeter:";
    }
}
long pv_cm(float length,float width,float height)
{
    long result=(length*width*height)/3;
    long num=100*100*100;
    result=result*num;
    cout<<result;
    return result;
}
long pv_km(float length,float width,float height)
{
    long result=(length*width*height)/3;
    cout<<result<<endl;
    double num=(0.001)*(0.001)*(0.001);
    cout<<num;
    result=result*num;
    cout<<result;
    return result;
}
long pv_mm(long length,long width,long height)
{
    long result=(length*width*height)/3;
    cout<<result;
    double num=1000*1000*1000;
    cout<<num<<endl;
    result=result*num;
    cout<<result;
    return result;
}
