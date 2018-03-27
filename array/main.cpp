#include <iostream>

using namespace std;

int main()
{
    const int x=3,y=4;
    int a[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;

    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<a
            [i][j]<<"   ";
        }
        cout<<endl;
    }

    return 0;
}
