#include <iostream>

int add(int x1, int y1)
{
    int count = 0;
    ++count;
    printf("count = %d\n", count);
    return x1 + y1;
}


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

};


int main()
{
    for (size_t i = 0; i < 10000; i++)
    {
        int result = add(1,2);
    }


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


}


