#include<iostream>
using namespace std;
int main()
{
    int a[10],s=0;
    for( int i =0; i < 5; i ++ )
    {
        cin >>a[i];
        s+=a[i];
    }
    if( s%5 == 0 && s!=0 )
        cout<<s/5<<endl;
    else cout<<"-1"<<endl;
    return 0;
}
