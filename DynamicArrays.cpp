#include <iostream>

using namespace std;

int main()
{
    float *arr;
    int arrSize;
    int fact;
    float sum=0;
    cin>>arrSize;
    arr = new float [arrSize];
    for(int i=0; i<arrSize; i++)
    {
        if(i==0)
        {
            fact=1;
        }
        else
        {
            for(int j=i; j>0; j--)
            {
                fact=i*j;
            }
        }
        arr[i]=1.0/fact;
    }

    for(int i=0; i<arrSize; i++)
    {
        sum+=arr[i];

    }
  
    cout<<sum<<endl;
   delete [] arr;
    return 0;
}
