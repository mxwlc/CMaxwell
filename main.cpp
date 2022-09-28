#include<iostream>
class point
{
private:
    /* data */
    int x,y;
public:
    point(int ix, int iy): x(ix) y(iy){}
    ~point() {
        std::cout << "Removing from scope\n"
    }
};



int main()
{
    
    return 0;
}
