#include<iostream.h>
#include<conio.h>
#include<stdio.h>


class travel
{
  int t_code;
  int no_of_adults;
  int no_of_children;
  int dist;
  float total_fare;
  float fare;

  public:

  travel()
  {
    t_code=0;
  }

  void assignfare()
  {
    if(dist>=1000)
    {
      total_fare=500;
    }
    else
    {
      total_fare=300;
    }
  }

  void input()
  {
    cout<<"\n\nEnter the Travel Code ";
    cin>>t_code;

    cout<<"\nEnter the no. of adults ";
    cin>>no_of_adults;

    cout<<"\nEnter the no. of children ";
    cin>>no_of_children;

    cout<<"\nEnter the distance to be travelled ";
    cin>>dist;

  }

  void output()
  {
    cout<<"\n\nTravel code        : "<<t_code;
    cout<<"\nNumber of adults   : "<<no_of_adults;
    cout<<"\nNumber of children : "<<no_of_children;
    cout<<"\nDistance           : "<<dist;

    assignfare();
    cout<<"\nTotal fare         : Rs "<<total_fare;
  }

}t;

void main()
{
  clrscr();

  cout<<"\n                                     MELANGE                               ";
  cout<<"\n\n                                TOURS AND TRAVELS                         ";
  cout<<"\n--------------------------------------------------------------------------------";

  t.input();
  t.output();

  getch();

}
