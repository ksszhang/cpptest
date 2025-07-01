#include <iostream>
class point3d
{
private:
    int x,y,z;
public:
    point3d()
    {
        printf("point3d\n");
    }

    point3d(int x, int y, int z)
    {
        printf("point3d(int x, int y, int z)\n");
        this->x = x;
        this->y = y;
        this->z = z;
    }


    ~point3d();

    int add(int x, int y)
    {}
};

int main()
{
    int a(4);
    point3d pt(3,4,5);
    point3d ptt;


    int b = 4;
    int c = {5};
}


