#include<iostream>
#include"Rectangle1.h"
#include<vector>

using namespace std;

const Rectangle1 & findMax(const vector<Rectangle1> & arr){
    int Size=0;
    for(int i=1;i<arr.size();i++){
        if(arr[Size].getArea()<arr[i].getArea()){
            Size = i;
        }
    }
    return arr[Size];
}

int main(){
    vector<Rectangle1> r;

    Rectangle1 r1;
    r1.setLength(10);
    r1.setWidth(4);
    r.push_back(r1);

    Rectangle1 r2;

    r2.setLength(6);
    r2.setWidth(5);
    r.push_back(r2);

    Rectangle1 r3;
    r3.setLength(7);
    r3.setWidth(9);
    r.push_back(r3);
    
    Rectangle1 ret;
    ret=findMax(r);
    cout<< ret.getLength()<<endl;
    cout<< ret.getWidth()<<endl;
    cout<< ret.getArea()<<endl;
    cout<< ret.getPerimeter()<<endl;
    return 0;
}