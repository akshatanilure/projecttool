#include<iostream>
using namespace std;
#include<string.h>
class String
{
    char* cStr;
    int len;
    public:
    String()
    {
        cout<<"Default constructor is called\n";
        cStr=NULL;
        len=0;
    }
     String(const char* p)
     {
        cout<<"Parameterised constructor is called\n";
        if(p==NULL)
        {
            cStr=NULL;
            len=0;
        }
        else
        {
           len=strlen(p);
           this->cStr=new char[len+1];
           strcpy(cStr,p); 
        }
     }
     String(const String& ss)//copy constructure
     {
        cout<<"Copy constructor is called\n";
        if(ss.cStr==NULL)
        {
            cStr=NULL;
            len=0;

        }
        else
        {
            len=strlen(ss.cStr);
            cStr=new char [len+1];
            strcpy(cStr,ss.cStr);
        }
     }
     char* getString()
     {
        if(cStr==NULL)
        {
            cout<<"string is empty\n";
            return NULL;
        }
        return cStr;
     }
     ~String()
     {
        delete []cStr;

     }
};
int main()
{
    String s1("abc");
    String s2(s1);
    String s3;
    cout<<s1.getString()<<endl;
    cout<<s2.getString()<<endl;
    cout<<s3.getString()<<endl;
    return 0;
}