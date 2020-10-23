#include <iostream>
using namespace std;


int main()
{
    unsigned int n;
    unsigned long  factorial =1;
    cout<<"\n enter a positive integer \n";
    cin>>n;
    for(int i=1 ;i <=n ; ++i)
    {
        factorial*=i;
    }
    cout<<"\n factorial is \n"<<n<<"="<<factorial;
    return 0;

}
