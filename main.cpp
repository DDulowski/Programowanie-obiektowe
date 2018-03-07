//zadania 3 i 4

#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    float x,y;

    public:
    Point(float x, float y){
        this->x = x;
        this->y = y;
    }

    float getX(){
        return x;
    }
    float getY(){
        return y;
    }
};

float Distance(Point p1, Point p2){
    return sqrt(pow(p2.getX()-p1.getX(),2)+pow(p2.getY()-p1.getY(),2));
}

int main()
{
    Point p1 = Point(2,3);
    Point p2 = Point(5,6);
    cout<<"("<<p1.getX()<<","<<p1.getY()<<")"<<endl;
    cout<<"("<<p2.getX()<<","<<p2.getY()<<")"<<endl;
    cout<<"Odleglosc miedzy punktami: "<< Distance(p1,p2)<<endl;

    return 0;
}


