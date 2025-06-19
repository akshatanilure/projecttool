#include<iostream>
using namespace std;
class B;
class A
{
        int a;
        public:
                void set(int x)
                {
                    a=x;
                }
        friend void max(A,B);
};
class B
{
        int b;
        public:
                void set(int y)
                {
                    b=y;
                }
        friend void max(A,B);
};

void max(A P, B Q)
{
        if(P.a>Q.b)
                cout<<"Object of class A is bigger\n";
        else
                cout<<"Object of class B is bigger\n";
}

int main()
{
    A X;
    B Y;
    X.set(10);
    Y.set(20);
    max(X,Y);
    return 0;
}