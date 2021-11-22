#include "Rectangle1.h"

Rectangle1 :: Rectangle1 (float initialLength, float initialWidth){
    Length = new float(initialLength);
    Width = new float (initialWidth); 
}

Rectangle1 :: Rectangle1 (const Rectangle1 & rhs){
    Length = new float(*rhs.Length);
    Width = new float(*rhs.Width);
}

float Rectangle1 :: getLength()const {
    return *Length;
}

float Rectangle1 :: getWidth()const {
    return *Width;
}

void Rectangle1 :: setLength(float x){
    *Length = x;
}

void Rectangle1 :: setWidth (float y){
    *Width = y;
}
float Rectangle1 :: getArea() const {
      return *Length * *Width;
}

float Rectangle1 :: getPerimeter() const{
    return 2*(*Length + *Width);
}
bool Rectangle1::operator<(const Rectangle1& rhs) const  {
    if(this == &rhs)
       return false;
    if(this->getArea() < rhs.getArea())
        return true; 
    else if(this->getArea() > rhs.getArea())
        return false;
    if(this->getPerimeter() < rhs.getPerimeter())
        return true;
    else
        return false;            
}

 const Rectangle1 & Rectangle1::operator=(const Rectangle1 & rhs){
    if(this != & rhs)
        *Length = *rhs.Length;
        *Width = *rhs.Width;
         
     return *this;
}

Rectangle1 :: ~Rectangle1(){
    delete Length;
    delete Width;
}