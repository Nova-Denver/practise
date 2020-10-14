#include<iostream>
using namespace std;
class rectangle {

public:
    int length;
    int breath;

    int area()
    {
        return length*breath;
    }
    int  perimeter()
    {

        return 2*(length+breath);
    }

};
int main()
{
    rectangle r1,r2;
    r1.length=1;
    r1.breath=20;
    cout<<endl;
  cout<<r1.area();
  cout<<endl;
  cout<<r1.perimeter()<<endl;
  // memory allocating in heap
  rectangle *p=new rectangle;
  p->length=10;
  p->breath=10;
  cout<<p->area()<<endl;
  cout<<p->perimeter()<<endl;



}
