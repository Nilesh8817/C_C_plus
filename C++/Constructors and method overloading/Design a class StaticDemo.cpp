#include<iostream.h>
#include<conio.h>
class items
{
static int count;
int number;
public:
void getdata(int a)
{
number=a;
count++;
}
void getcount(void)
{
cout<<"count:";
cout<<count<<"\n";
}
};
int items::count;
void main()
{
clrscr();
items a,b,c;
a.getcount();
b.getcount();
c.getcount();
a.getdata(100);
b.getdata(200);
c.getdata(300);
cout<<"after reading data";
a.getcount();
b.getcount();
c.getcount();
getch();
}
