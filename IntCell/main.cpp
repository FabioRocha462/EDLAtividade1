#include<iostream>
#include "IntCell.h"
using namespace std;

int main(){
    IntCell m;
    m.write(10);
   cout<< "O valor é :"<<m.read()<<endl;
   IntCell a=m;
   cout<<a.read()<<endl;
   IntCell *p = new IntCell;
   cout<<&p<<endl;
   p->write(56);
   cout<<p->read()<<endl;
   delete p;
}