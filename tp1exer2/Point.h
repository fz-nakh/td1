#pragma once
#include <string>
class Point {
      
private:
          Point();
        Point(double, double);
        Point(const Point& P);
public:
        void m_printPoint() const;
        string tostring();
        Point translate(double d);
        static Point m_creator(double x, double y);//methode de clase

private:
    double x;
    double y;


};

