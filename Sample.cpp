#include<iostream>
using namespace std;

/*class A
{
    int a;
public:
    void setA(int x)
    {
        a=x;
    }
    int getA()
    {
        return a;
    }
    void printA()
    {
        cout<< "A is ->"<<a<<endl;
    }
};

int main()
{
    ///create obeject
    A obj;
    obj.setA(10000);
    int data=obj.getA();
    cout<<data<<endl;

    return 0;
}*/


///Modelling car

class car
{
public:
    int carNo;
    string make;
    string model;
    int speed;
    string color;

    // default constructor
    car()
    {
        carNo=0;
        make="make";
        model="model";
        speed=0;
        color="color";
    }

    //parameterised constructor
    car(int n, string m,string m1,int s,string c)
        {
            carNo=n;
            make=m;
            model=m1;
            speed=s;
            color=c;
        }
    car(int n,string m)
        {
            carNo=n;
            model=m;
        }
    car(car &c3)
    {
        carNo=c3.carNo;
        make=c3.make;
        model=c3.model;
        speed=c3.speed;
        color=c3.color;
    }
    void printcar()
        {
            cout<<"Car details"<<endl;
            cout<<carNo<<":"<<make<<":"<<model<<":"<<speed<<":"<<color<<endl;
        }
};

int main()
{
    car car1;
    cout << "Default constructor"<<endl;
    car1.printcar();

    cout<<endl;

    car car2(4567,"Tiago");
    cout << "Parameterized constructor1"<<endl;
    car2.printcar();

    cout<<endl;

    car car3(123,"TATA","I20",200,"RED");
    cout << "Parameterized constructor1"<<endl;
    car3.printcar();

    cout<<endl;

    car car4(car3);
    cout << "Copy of car3 constructor" << endl;
    car4.printcar();
    return 0;
}
