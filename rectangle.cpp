// Example solution for Rectangle and Square friend classes
#include <assert.h>

// Declare class Rectangle
class Rectangle{
    private:
        int width{0};
        int height{0};
    
    public:
    Rectangle(const Square& a){}
    float Area(){
        return width*height;
    }
};

// Define class Square as friend of Rectangle
class Square{
    private:
        int side{0};
        friend class Rectangle;
    public:
    
    Square(int s){
        side = s;
    }

};
// Add public constructor to Square, initialize side
    // Add friend class Rectangle

    // Add private attribute side

// Define class Rectangle
    // Add public function to Rectangle: Area()
    
    // Add private attributes width, height;

// Define a Rectangle constructor that takes a Square

// Define Area() to compute area of Rectangle

// Update main() to pass the tests
int main()
{   

    Square square(4);
    Rectangle rectangle(square);
    assert(rectangle.Area() == 16); 
}