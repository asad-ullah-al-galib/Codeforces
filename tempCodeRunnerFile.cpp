
#include<unistd.h>
using namespace std;

int main()
{
    short minn,sec; int time;


    do
    {
        cout<<"Enter seconds:: ";
        cin>>sec;
    } while (sec>59);
    do
    {
        cout<<"Enter minutes:: ";
        cin>>minn;
    } while (minn>59);

    time=(minn!=0)?minn*60 : 0;

    time +=sec;

    for(int i=time;i>0;i--)
    {
        system("clear");
        system("cls");
        cout<<"The time remaining is 0: " <<minn<<":"<<sec<<endl;

        minn =(i%60==0)? --minn : minn;

        sec = (sec ==0)? 59 : --sec;

        //system("sleep 1");
        sleep(1);
    }
    system("clear");

    cout<<"*******************\nTimer ended! \a\nLasted for " << time <<"seconds"<<"\n***********\n\n\n\n\n"<<endl;
    
}