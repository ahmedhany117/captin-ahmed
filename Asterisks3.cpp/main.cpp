#include <iostream>

using namespace std;

int main()
{
    for(int i=0;i<=9;i++){

            for(int j=1;j<=i;j++){
                cout<<" ";
            }
            for(int k=9;k>=i;k--){
                cout<<"*";
            }
        cout<<endl;

    }
    return 0;
}
