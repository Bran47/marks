#include <iostream>
using namespace std;
int main() 
{
string name;
cout<<"Enter student name";
cin>> name;
float mark;
cout<<"Enter marks";
cin>> mark;

if (mark>70)
cout<<"grade A";

else if
(mark >=60 && 69)
cout<<"grade B";

else if 
(mark>= 50 && 59)
cout<<"grade C";

else if 
(mark>= 40 && 49)
cout<<"grade D";

else
cout<<"failed!";
return 0;
}
