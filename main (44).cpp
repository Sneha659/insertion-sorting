/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    
    int num[]= {12,9,37,86,2,17,5};
    int i,j,x;

    cout<<"Array before Insertion Sort"<<endl;
    for(i=0; i<7; i++)
    {
        cout<<num[i]<<" ";
    }

    for(i=1; i<7; i++)
    {
    
        x=num[i];

        j=i-1;
        while(j>=0)
        {
            if(x<num[j])
            {
                num[j+1]=num[j];
            }
            else
            {
                break;
            }
            j=j-1;
        }
        num[j+1]=x;
    }
    cout<<"\n\nArray after Insertion Sort\n";
    for(i=0; i<7; i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}