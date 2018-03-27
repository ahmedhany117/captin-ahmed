#include <iostream>

using namespace std;

int main()
{
    for(int i=3;i<100;i++)
    {
        bool prime=true;
        for(int j=i-1;j>=2;j--)
        {
            if(i%j==0)
            {
                prime=false;
                break;
            }
        }
        if(prime)
            cout<<i<<endl;
    }
    return 0;
}
