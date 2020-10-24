#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cout<<"Enter any 3 numbers\n";
    cin>>a>>b>>c;
    if(a<b&&a<c)
    {
        cout<<a<<" is the smallest number";
    }
    if(b<a&&b<c)
    {
        cout<<b<<" is the smallest number";
    }
    else
    {
        cout<<c<<" is the smallest number";
    }
    return 0;
}
