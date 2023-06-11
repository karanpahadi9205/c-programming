#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value";
    cin>>n;
    int row=1;
    while(row<=n)
    {
    int col=1,c=row;
    while(col<=row)
    {
        cout<<c;
        c=c+1;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
}
return 0;
}
