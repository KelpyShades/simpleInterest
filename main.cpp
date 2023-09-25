#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout<< "@@@...Program To Calculate Simple Interest In Ghana Cedis...@@@\n" <<endl;
    float p;
    float r;
    float t;
    float s;
    cout<<"Enter Your Principle:" <<endl;
    cin>>p;
    cout<<"Enter Your Rate:" <<endl;
    cin>>r;
    cout<<"Enter Your Time:" <<endl;
    cin>>t;
    s = (p*r*t)/100;
    cout<<"Your Simple Interest Is: "<<s<<"GHS" <<endl;
    return 0;
}
