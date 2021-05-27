#include <iostream>
#include <cmath>
#include <assert.h>

// Define pi
#define PI 3.141

// Define Line Class
class LineSegment{
    protected:
        int length;
};
    // Define protected attribute length
    
// Define Circle subclass
class Circle : public LineSegment{
    public:
        int radius;
        

// Define public setRadius() and getArea()
    
    void setRadius(int r){
        radius = r;
    }
    float getArea(){
        return radius * PI;
    }
};

    
// Test in main()
int main() 
{
    LineSegment radius {3};
    Circle circle(radius);
    assert(int(circle.getArea()) == 28);
}