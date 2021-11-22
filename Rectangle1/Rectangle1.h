#ifndef RECTANGLE1_H
#define RECTANGLE1_H
class Rectangle1 {
private:
    float *Length;
    float *Width;
public:
    explicit Rectangle1 (float initialLength = 0, float initialWidth =0);

    Rectangle1 (const Rectangle1 & rhs);
    
    ~Rectangle1();

    bool operator<(const Rectangle1& rhs) const;

    const Rectangle1 & operator=( const Rectangle1 & rhs);

    float getLength()const;

    float getWidth() const;

    float getArea() const;

    float getPerimeter() const;

    void setLength(float x);

    void setWidth(float y);
};
#endif