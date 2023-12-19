/* Q.1 Write a Program to create a class that illustrates the concept of handling all types of exceptions using general exceptions.*/

#include <iostream>
using namespace std;

class Handle{
    public:
    int a=20, b=0;
    void fun(){
        try{
            if(b==0){
                throw a;
            }
            else{
                cout<<"Division is " << a/b;
            }
        }
        catch(int a){
            cout<<"Invalid denom. of int datatype";
        }
        catch(double a){
            cout<<"Invalid denom. of double datatype";
        }
        catch(char a){
            cout<<"Invalid denom. of char datatype";
        }
        catch(...){
            cout<<"Invalid denom. of all datatype";
        }
    }
};

int main()
{
    Handle a;
    a.fun();

    return 0;
}


/* Q.2 Write a Program to throw 0 if the age of the user is less than 18, 
otherwise print that you are eligible to vote. Also, handle that thrown exception and print you are not eligible to vote */

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    
    try{
        if(age >= 18) {
            cout<<"you are eligible to vote";
        }
        else {
            throw 0;
        }
    }
    catch(int a){
        cout <<"you are not eligible to vote";
    }

    return 0;
}
