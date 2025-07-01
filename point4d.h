class point4d
{
private:
    int x4,y4,z4,w4;

public:
    void offset(point4d pt)
    {
        this->x4 += pt.x4;
        this->y4 += pt.y4;
        this->z4 += pt.z4;
        this->w4 += pt.w4;

    }

    friend class point3d;
};

void main()
{

}
