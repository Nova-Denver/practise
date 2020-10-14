#include<iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;
public:
    rectangle();
    rectangle(int l,int b);
    rectangle(rectangle &r);
    int getLength()
    {
        return length;
    }
    int getBreath()
    {
        return breath;
    }
    void setlength(int l);
    void setbreath(int b);
    int area();
    int perimeter();
    bool isSquare();

};
class cuboid:public rectangle
{
private:
    int height;
public:
    cuboid(int h)
    {
        height=h;
    }
    int getHeight()
    {
        return height;
    }
    void setHeight(int h)
    {
        height=h;
    }
    int volume()
    {
        return getLength()*getBreath()*height;
    }

};
int main()
{

    cuboid c(5);
    c.setlength(10);
    c.setbreath(7);
    cout<<"volume is"<<c.volume()<<endl;
    rectangle r(10,10);
    cout<<r.area();


}
rectangle::rectangle()
{
    length=1;
    breath=1;
}
rectangle::rectangle(int l,int b)
{
    length=l;
    breath=b;
}
rectangle::rectangle(rectangle &r)
{
    length=r.length;
    breath=r.breath;
}
void rectangle::setlength(int l)
{
    length=l;
}
void rectangle::setbreath(int b)
{
    breath=b;
}
int rectangle::area()
{
    return length*breath;
}
bool rectangle::isSquare()
{
    return length==breath;
}
