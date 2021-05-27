#include <iostream>
#include <string>

using namespace std;

// Define base class Animal
class Animal {
public:
    string color = "color";
    string name = "Animal";
    int age = 0;
    
   
};

// Declare derived class Snake
class Snake : public Animal {

public:
    int length = 0;

 void MakeSound() const
    {
        std::cout << "zzzz \n";
    }
};

// Declare derived class Cat

class Cat : public Animal{

public: 
    int height = 0;

 void MakeSound() const
    {
        std::cout << "Miau \n";
    }
};
// Test in main()

int main(){
    Animal animal;
    Snake snake;
    Cat cat;

    snake.MakeSound();
    cat.MakeSound();
    
};