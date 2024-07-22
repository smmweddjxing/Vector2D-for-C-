#ifndef VECTOR-SHAPE_H_INCLUDED
#define VECTOR-SHAPE_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
#define int double
class Vector2
{
public:
    const int PI_changed=180/3.141592653;
    int x;
    int y;
    Vector2(int dx,int dy)
    {
        x=dx,y=dy;
    }
    void display()
    {
        cout<<x<<" "<<y;
    }
    int dis()
    {
        return sqrt(x*x+y*y);
    }
    int dot(const Vector2 &v)
    {
        return this->x*v.x+this->y*v.y;
    }
    int angle(Vector2 a)
    {
        int x=acos(this->dot(a)/this->dis()/a.dis());
        return x;
    }
    int angle_deg(Vector2 a)
    {
        int x=acos(this->dot(a)/this->dis()/a.dis());
        return x*PI_changed;
    }
    friend ostream &operator<<(ostream &out,const Vector2 &v)
    {
        out<<"<Class=\"Vector2\">("<<v.x<<","<<v.y<<")";
        return out;
    }
    Vector2 operator*(const int &lamda)
    {
        return Vector2((this->x)*lamda,(this->y)*lamda);
    }
    Vector2 operator/(const int &b)
    {
        return Vector2(this->x/b,this->y/b);
    }
    Vector2 operator-()
    {
        return Vector2(-this->x,-this->y);
    }
    Vector2 operator+ (const Vector2 &b)
    {
        Vector2 r(this->x+b.x,this->y+b.y);
        return r;
    }
    Vector2 operator- (const Vector2 &b)
    {
        auto x= Vector2(this->x-b.x,this->y-b.y);
        return x;
    }

};
#undef int
#endif // VECTOR-SHAPE_H_INCLUDED
