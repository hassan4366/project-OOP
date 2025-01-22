#include <iostream>
using namespace std;

class Rectangle{
private:
    float lenght;
    float width;

public:
    void setlenght(float len)
    {
        if (len >=0)
            lenght = len;
        else
            cout<<"errore ,please enter positive value";
    }

    float getlenght()
    {
        return lenght;
    }
    public:
    void setwidth(float w)
    {
        if (w >=0)
           width = w;
        else
            cout<<"errore ,please enter positive value";
    }

    float getwidth()
    {
        return width;
    }

    float getArea()
    {
        return lenght * width;
    }
     float getperimeter()
    {
        return (lenght + width)*2;
    }


};
int main ()
{
    Rectangle box;
    box.setlenght(34.5);
    box.setwidth(54.8);
    cout <<"the rectangle area = " << box.getArea()<<endl;
    cout <<"the rectangle perimeter = " << box.getperimeter()<<endl;

    return 0;

}
