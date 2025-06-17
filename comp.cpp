#include<iostream>
using namespace std;
#include<stdlib.h>
class COMPLEX
{
        private: int real;
                 int img;

        public:
                COMPLEX()
                {
                    real=0;
                    img=0;
                }
                COMPLEX(int r,int i)
                {
                    real=r;
                    img=i;

                }
                void initialize();
                void display();
                // friend COMPLEX operator+(COMPLEX,COMPLEX);
                // friend COMPLEX operator++(COMPLEX&);
                // COMPLEX operator++(int);
                friend ostream& operator<<(ostream&,const COMPLEX&);
    friend void operator>>(istream&,COMPLEX &);
};
void COMPLEX::initialize()
{
    cout<<"Enter the real part\n";
    cin>>this->real;
    cout<<"Enter the imaginary part\n";
    cin>>this->img;
}
// COMPLEX COMPLEX::operator++(const COMPLEX &c2)
// {
//     COMPLEX resultant;
//     resultant.real=real+c2.real;
//     resultant.img=img+c2.img;
//     return (resultant);

// }
// void COMPLEX::subtract(COMPLEX c1,COMPLEX c2)
// {
//     this->real=c1.real-c2.real;
//     this->img=c1.img-c2.img;
//     return;
// }
ostream& operator<<(ostream &mycout,const COMPLEX &c)
{
    if(c.img>=0)
    mycout<<c.real<<"+i"<<c.img<<endl;
    else
    mycout<<c.real<<"-i"<<-(c.img)<<endl;
}
void operator>>(istream &mycin,COMPLEX &c)
{
    mycin>>c.real;
    mycin>>c.img;
}
void COMPLEX::display()
{
    if(img>=0)
    cout<<this->real<<"+i"<<this->img<<endl;
    else
    cout<<this->real<<"-i"<<-(this->img)<<endl;
}
// int main()
// {
//     COMPLEX c1(2,3),c2(5,5),c3,c4,*p;
//     system("clear");
//     c3=c1+c2;
//     c1.display();
//     c2.display();
//     c3.display();
//     return 0;
// }