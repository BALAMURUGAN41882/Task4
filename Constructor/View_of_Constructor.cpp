#include<iostream>
using namespace std;
class constructor1
{
   int fir,fir1,fir2;
   public:
   constructor1()
   {
     fir=1;
     fir1=1;
     fir2=1;
   }
   constructor1(int foo)
   {
      fir=foo;
   }
   constructor1(int foo,int foo1)
   {
       fir=foo;
       fir1=foo1;
   }
   constructor1(int foo,int foo1,int foo2)
   {
     fir = foo;
     fir1= foo1;
     fir2 =foo2;
   }
   constructor1(constructor1 &obj)
   {cout<<"copy constructor"<<endl;
     fir=obj.fir;
     fir1=obj.fir1;
   }
   void printmethod()
   {
       cout<<"fir: "<<fir<<" fir1: "<<fir1<<" fir2: "<<fir2<<endl;;
   }

};
int main()
{
  constructor1 obj;
  constructor1 obj1(4,6);
  constructor1 obj2(8,9,2);
  obj1.printmethod();
  obj2.printmethod();
  cout<<"Garbage is printed if assignation of 2 para cons to 3 para cons;"<<endl;
  obj2=obj1;
  obj2.printmethod();
  cout<<"Copy cons is copying existing obj to new obj;"<<endl;
  constructor1 obj3 =obj1;
  obj2.printmethod();
}
