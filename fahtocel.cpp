#include<iostream>
using namespace std;
class celsius{
    public:
    void fahrenheit(){
        float f,c;
        cout<<"enter the fahrenheit degree value";
        cin>>f;
        c=(f-32)*5/9;
        cout<<"the celsius value is c="<<c;
    }
        
};
int main(){
    celsius C;
    C.fahrenheit();
}