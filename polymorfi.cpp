#include "std_lib_facilities.h"

class Shape{
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Circle: public Shape{
    double radius;
public:
    Circle(double r) : radius{r} {}

    double area() const override {
        return 3.14 * radius * radius;
    }

    double perimeter() const override{
        return 2 * 3.14 * radius;
    }
};


class Rectangle: public Shape{
private:
    double length;
    double heigth;
public:
    Rectangle(double l, double h) {
        l = min(100, l);
        this->length = l;
        this->heigth = h;
    }
    double area() const override {
        return length * heigth;
    }
    double perimeter() const override {
        return 2* (length + height);
    }
};

class Square : public Rectangle {
    public:
    Square(double width) : Rectangle(width, width) {}
};

int main() {

    Circle c{5};

    Rectangle r;

    return 0;
}
