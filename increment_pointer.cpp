//Hardik Dhalla
//23070123058
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int*aptr=&a;
    cout<<aptr<<endl;
    
    aptr++;
    cout<<aptr<<endl;

    return 0;
}

/*output
0x7fff9e6b9314
0x7fff9e6b9318*/