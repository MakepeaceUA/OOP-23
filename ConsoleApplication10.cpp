#include <iostream>
#include <string>
using namespace std;


//Задание 1
class Circle
{
protected:
    int diameter;
public:
    Circle()
    {
        diameter = 2;
    }
    Circle(int val) 
    {
        diameter = val;
    }
};
class Square
{
protected:
    int side;
public:
    Square()
    {
        side = 2;
    }
    Square(int val)
    {
        side = val;
    }
};
class CircleInSquare : public Circle, public Square 
{
public:
    CircleInSquare() : Circle(), Square() {}
    CircleInSquare(int diam,int sd) : Circle(diam), Square(sd) {}

    void Print() 
    {
        if (diameter == side) 
        {
            cout << diameter << "\n";
            cout << side << "\n";
        }
        else 
        {
            cout << "Circle isn't in Square.";
        }
    }
};

int main() {
    CircleInSquare CrcInSqr(30,30);
    CrcInSqr.Print();
}




















//Задание 2
//class Wheel
//{
//public:
//    void Print() 
//    {
//        cout << "Wheel\n";
//    }
//};
//class Engine
//{
//public:
//    void Print()
//    {
//       cout << "Engine\n";
//    }
//};
//class Doors
//{
//public:
//    void Print()
//    {
//        cout << "Doors\n";
//    }
//
//};
//class Car : public Wheel,public Engine,public Doors
//{
//public:
//    void Print()
//    {
//        cout << "Car:\n";
//        Wheel::Print();
//        Engine::Print();
//        Doors::Print();
//    }
//};
//int main() 
//{
//    Car car;
//    car.Print();
//}