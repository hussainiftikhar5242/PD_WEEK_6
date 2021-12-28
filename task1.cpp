#include<iostream>
using namespace std;
string checker(int x , char y);
main()
{
    int x;
    char y;
    cout<<"enter number:";
    cin >> x;
    cout<<"enter character:(m/f)";
    cin >> y;
    string generation=checker(x,y);
    cout<<"generation:"<<generation;
}
string checker(int x ,char y)
{
    if (x == -3 && y == 'm')
    {
        string generation="great grandfather:";
        return generation;
    }
    else if(x == -3 && y == 'f')
    {
        string generation="great grandmother:";
        return generation;
    }
    else if(x == -2 && y == 'm')
    {
        string generation="grandfather:";
        return generation;
    }
    else if(x == -2 && y == 'f')
    {
        string generation="grandmother";
        return  generation;
    }
    else if(x == -1 && y == 'm')
    {
        string generation="father:";
        return  generation;
    }
    else if(x == -1 && y == 'f')
    {
        string generation="mother:";
        return  generation;
    }
    else if(x == 0 && y == 'm' || x==0 && y == 'f')
    {
        string generation="me!";
        return  generation;
    }
    else if(x == 1 && y == 'm')
    {
        string generation="son:";
        return  generation;
    }
    else if(x == 1 && y == 'f')
    {
        string generation="daughter:";
        return  generation;
    }
    else if(x == 2 && y == 'm')
    {
        string generation="grandson:";
        return  generation;
    }
    else if(x == 2 && y == 'f')
    {
        string generation="granddaughter:";
        return  generation;
    }
    else if(x == 3 && y == 'm')
    {
        string generation="great grandson:";
        return  generation;
    }
    else if(x == 3 && y == 'f')
    {
        string generation="great granddaughter:";
        return  generation;
    }
    else 
    {
        cout<<"nope:";
        return "0";
    } 
}