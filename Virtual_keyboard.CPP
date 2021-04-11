#include<iostream.h>                                  	f
#include<conio.h>

int main ()
{
 clrscr();
 char passd[100];
 int i = 0;
 cout << "$Virtual Keyboard session start..." << endl;
 while((passd[i]=getch()) != 13) //ASCII VALUE OF ENTER IS 13.
 {
  if (passd[i] == 17) //ASCII VALUE OF CTRL Q is 17.
  {
      cout << "Session Ended by the User" << endl;
      getch();
      return 0;
  }
  i++;
 }
for (int j = 0;j != i;j++)
{
 cout << passd[j];    //TO DISPLAY ENTERED CHARACTERS.

}
cout << endl;
getch();
return 0;
}