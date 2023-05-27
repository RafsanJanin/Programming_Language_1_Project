#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

class math
{
    int a,b;
public:
    void math1();

}X;
void math::math1()
{
    int d,c,score=0;
    for(int f=0;f==0;)
    {
        srand(time(0));
        a=(rand()%100)+1;
        b=(rand()%100)+1;
        cout<< a << "+" <<b<< "=?:";
        cin>>c;
        d=a+b;
        if(d==c)
        {
            cout<<"correct"<<endl;
            score++;
        }
        else
        {
            cout<<"---------wrong ans---------"<<endl;
            cout<<"---------game over---------"<<endl<<endl;

            cout<< "your score is "<<score<<endl;
            f=1;
            break;
        }
    }
}
int main()
{

    cout << "------ Welcome to Math game (created by Rafsan Janin)------" << endl;
    X.math1();

    return 0;
}
