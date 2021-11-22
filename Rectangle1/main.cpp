#include<iostream>
#include"Rectangle1.h"
using namespace std;

int main(){
    Rectangle1 r1;
    float x, y;
    cout <<"write the Length"<<endl;
    cin>>x;
    cout << "write the Width"<<endl;
    cin>>y;
    r1.setLength(x);
    r1.setWidth(y);
    cout <<"the Area is: "<<r1.getArea()<<endl;

    Rectangle1 r2;
    cout <<"write the Length"<<endl;
    cin>>x;
    cout << "write the Width"<<endl;
    cin>>y;
    r2.setLength(x);
    r2.setWidth(y);
    cout <<"the Area is: "<<r2.getArea()<<endl;
    if(r1<r2){
        cout<<"R1 is Smaller"<<endl;
    }else{
        cout<<"R2 is Smaller"<<endl;
    }
}