#include<iostream>
using namespace std;
int main()
{
    int n,choice,row=1;
    char m;
    cout<<"enter the number";
    cin>>n;
    cout<<"enter the value of choice 1.tristar\n 2.starpattern\n 3.1122pattern\n 4.abbpatter";
    cin>>choice;
    if(choice==1){
        while(row<=n)
        {
            int col=1;
            while(col<=row)
            {
                cout<<"*";
                col=col+1;
            }
            cout<<endl;
            row=row+1;
        }
    }
    if(choice==2){
        while(row<=n)
        {
            int col=1;
            while(col<=n)
            {
                cout<<"*";
                col=col+1;
            }
            cout<<endl;
            row=row+1;
        }
    }       
    if(choice==3){
        while(row<=n)
        {
            int col=1;
            while(col<=n)
            {
                cout<<row;
                col=col+1;
            }
            cout<<endl;
            row=row+1;
        }
    }
    if(choice==4)
    {
        char m;
        cout<<"enter the value of m";
        cin>>m;
        char row= 'A';
        while(row<=m)
        {
            char col='A';
            while(col<=row)
            {
              cout<<row;
              col=col+1;  
            }
            cout<<endl;
            row=row+1;
        }
    }
    return 0;
}    