// Q.1 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.
#include <iostream>
using namespace std;

class A
{
public:
    int no;
    void getdata()
    {
        cout << "Enter number:- ";
        cin >> no;
    }
};
class B : public A
{
public:
    void square()
    {
        cout << "The square of " << no << " is " << no * no << endl;
    }
};
class C : public A
{
public:
    void cube()
    {
        cout << "The cube of " << no << " is " << no * no * no << endl;
    }
};
int main()
{
    B b1;
    b1.getdata();
    b1.square();
    C c1;
    c1.getdata();
    c1.cube();

    return 0;
}


// Q.2 Write a Program to read and print Employee information with the use of Multilevel inheritance. (as same the attached image)
#include <iostream>
using namespace std;

class A
{
public:
    int id;
    char name[50], role[50];
    void getdata1()
    {
        cout << "Enter Employe name:- ";
        cin >> name;
        cout << "Enter Employe id:- ";
        cin >> id;
        cout << "Enter Employe role:- ";
        cin >> role;
    }
};
class B : public A
{
public:
    int salary, experience;
    void getdata2()
    {
        cout << "Enter Employe salary:- ";
        cin >> salary;
        cout << "Enter Employe experience:- ";
        cin >> experience;
    }
};
class C : public B
{
public:
    char comp_name[100], address[100];
    void getdata3()
    {
        cout << "Enter Employe company name:- ";
        cin >> comp_name;
        cout << "Enter Employe company address:- ";
        cin >> address;
    }
    void setdata()
    {
        cout << "---------------------------------" << endl;
        cout << "Employe Name: " << name << endl;
        cout << "Employe Role: " << role << endl;
        cout << "Employe Salary: " << salary << endl;
        cout << "---------------------------------" << endl;
    }
};
class D : public C
{
public:
    int contant;
    char email[50];
    void getdata4()
    {
        cout << "Enter Employe contant:- ";
        cin >> contant;
        cout << "Enter Employe email:- ";
        cin >> email;
    }
    void setdata2()
    {
        cout << "---------------------------------" << endl;
        cout << "Employe Id: " << id << endl;
        cout << "Employe Name: " << name << endl;
        cout << "Employe Role: " << role << endl;
        cout << "Employe Salary: " << salary << endl;
        cout << "Employe Experience: " << experience << endl;
        cout << "Employe Company Name: " << comp_name << endl;
        cout << "Employe Address: " << address << endl;
        cout << "Employe Email: " << email << endl;
        cout << "Employe Contant: " << contant << endl;
        cout << "---------------------------------" << endl;
    }
};

int main()
{
    D d1;
    d1.getdata1();
    d1.getdata2();
    d1.getdata3();
    d1.setdata();
    d1.getdata4();
    d1.setdata2();
    return 0;
}