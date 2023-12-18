//Q.1 Write a Program to add two distances using binary plus (+) operator overloading.

#include <iostream>
using namespace std;

class Distance
{
    public:
    int km, meter;
    void set(int km, int meter)
    {
        this->km=km;
        this->meter=meter;
        if(meter > 1000)
        {
            int k;
            k=meter/1000;
            this->meter%=100;
            this->km+=k;
        }
    }
    void get()
    {
        cout << "Km: " << km << "\tMeter: "<< meter <<endl;
    }
    Distance operator+(Distance x)
    {
        Distance temp;
        temp.km=this->km+x.km;
        temp.meter=this->meter+x.meter;
        return temp ;
    }
};

int main()
{
    Distance a, b, c;
    a.set(3,1020);
    b.set(2,2050);
    c=a+b;
    c.get();
    return 0;
}
