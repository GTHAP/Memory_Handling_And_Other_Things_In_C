// pointers to base class

// Function main declares two pointers to Polygon(named ppoly1 and ppoly2).
// These are assigned the addresses of rect and trgl, respectively, which are objects of type Rectangle and Triangle.
// Such assignments are valid, since both Rectangle and Triangle are classes derived from Polygon.

#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_values(int a, int b)
    {
        width = a; 
        height = b;
    }
};

class Rectangle : public Polygon {
public:
    int area()
    {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    int area()
    {
        return width * height / 2;
    }
};

int main() 
{
    Rectangle rect;
    Triangle trgl;
    Polygon* ppoly1 = &rect; 
    Polygon* ppoly2 = &trgl; 
    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    cout << rect.area() << '\n';
    cout << trgl.area() << '\n';
    return 0;
}