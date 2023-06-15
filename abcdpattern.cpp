#include <iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter the value of n";
    cin>>n;
    char row= 'A';
    while(row<=n)
    {
     char col='A';
     while(col<=n)
   {
    cout<<col;
    col=col+1;
   }
   row=row+1;
   cout<<endl;
    }
    return 0;
}
   