#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle();
    Rectangle(double, double);
    ~Rectangle();
    double getArea() const;
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    double getCircum() const;
};

#endif // RECTANGLE_H
