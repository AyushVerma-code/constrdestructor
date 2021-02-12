#include<iostream.h>
#include<conio.h>
#include<string.h>

class sample
{
  int a;
  char str[10];
  public:
  sample();            //default contructor
  sample(int,char[]);  //parameterised constructor
  sample(sample&);     //copy constructor

  void display();
};

sample::sample()
{
  cout<<"\n\nDefault constructor invoked ";
  a=1;
  strcpy(str,"HelloWorld");
}

sample::sample(int t,char temp[])
{
  cout<<"\n\nParameterised contructor invoked";
  a=t;
  strcpy(str,temp);
}

sample::sample(sample &s)
{
  cout<<"\n\nCopy Constructor invoked ";
  a=s.a;
  strcpy(str,s.str);
}

void sample::display()
{
  cout<<"\nThe value of a "<<a;
  cout<<"\nThe value of str "<<str;
}

void main()
{
  clrscr();

  sample s1;
  sample s2(20,"Computer");
  sample s3=sample(100,"Hello");

  sample s4(s3);
   s1.display();
  s2.display();
  s3.display();
  s4.display();
  
  getch();
}
