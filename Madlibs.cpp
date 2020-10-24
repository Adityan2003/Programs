#include <iostream>

using namespace std;

int main()
{
    string color, pnoun, celebrity;

    cout<<"Enter a colour: ";
    getline(cin, color);
    cout<<"Enter a plural noun: ";
    getline(cin, pnoun);
    cout<<"Enter a celebrity: ";
    getline(cin, celebrity);


    cout<<"Roses are "<<color<<endl;
    cout<<pnoun<<" are blue"<<endl;
    cout<<"I love "<<celebrity<<"u"<<endl;

    return 0;
}
