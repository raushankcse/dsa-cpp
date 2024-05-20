#include<iostream>
using namespace std;

void circumferenceCircle(int r)
{
    cout<<"Circumference of a circle: "<<2*3.14*r<<endl;
}
void areaCircle(int r)
{
    cout<<"Area of a circle: "<<3.14*r*r<<endl;
}

int main()
{

    int r;
    cout<<"Enter radius of cirle: ";
    cin>>r;
    circumferenceCircle(r);
    areaCircle(r);
    return 0;

}