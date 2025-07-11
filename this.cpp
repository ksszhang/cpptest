#include <iostream>
#include "point4d.h"

static int s_num = 10; // 只被初始化一次

int add(int x1, int y1)
{
    static int count = 0; // 无论add()被调用多少次，count只会被初始化一次
    ++count;
    printf("count = %d\n", count);
    s_num++;
    return x1 + y1;
}

static int zz;
class point3d
{
private:
    int x,y,z;
    int* d;
    static int zz;
public:
    point3d()
    {
        printf("point3d\n");
        x=0;
        y=0;
        point3d::zz=2;
    }

    point3d(int x, int y, int z)
    {
        printf("point3d(int x, int y, int z)\n");
        this->x = x;
        this->y = y;
        this->z = z;
        //return 3;
        d = new int;
    }

    point3d(int x, int y, int z, int d)
    {
        printf("point3d(int x, int y, int z)\n");
        this->x = x;
        this->y = y;
        this->z = z;
        //return 3;
        d = new int;
    }


    ~point3d()
    {
        printf("~point3d\n");
        delete d;
    }

    int add(int inputx, int y)
    {
        ++s_num;
        this->x=3;
        return this->x + this->y;
    }

    int getsum(int x, int y)
    {
        this->add(x,y);
    }

    static int getadd(int x, int y)
    {
        point3d pt = point3d(3,4,5); // ok
        add(x,y); // error
        point3d::zz + x; // ok
        this->x + this->y; //error
    }

    static point3d specify()
    {
        return point3d(100,100,100);
    }

    const int add2(int x , int y)
    {
        return x + y;
    }

    int add3(int x, int y) const
    {
        this->x = 3;
        return x + y;
    }
    const int add4(int x, int y) const
    {
        return x + y;
    }

    void offset()
    {
        point4d pt4d;
        pt4d.x4 =1; // notice
    }

};


int main()
{
    for (size_t i = 0; i < 10000; i++)
    {
        int result = add(1,2);
    }
    printf("s_num = %d\n", s_num); // ok
    //printf("count = %d\n", count); // error


    int a(4);
    point3d* pt = new point3d(3,4,5);
    point3d ptt;
    ptt.x = 3;
    //point3d pttt(3,4);
    delete pt;

    // 
    pt->add(3,4);

    // static
    point3d::zz = 3;
    point3d::getadd(3,4);


    //point3d pt = point3d();
    add(3,4);

    int b = 4;
    int c = {5};

    // 对象数组
    point3d pts[5]={point3d(),point3d(1,2,3)}; // ok
    auto r = pts[5]; // error

    const int result2 = pt->add2(1,2);

    int result3 = pt->add3(4,5);
}


