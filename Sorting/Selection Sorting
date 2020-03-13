#include <iostream>

using namespace std;

int main()
{   int maxsize=100;
    int arr[maxsize];
    int arr_size;
    int index;
    cin>>arr_size;
    for(int i=0;i<arr_size;i++)
        cin>>arr[i];
 int minimum;
  for(int i=0;i<arr_size;i++)
  {
      minimum=arr[i];
      for(int j=i+1;j<arr_size;j++)
      {
          if(arr[j]<minimum)
           {minimum=arr[j];
            index=j;}
      }
      int temp;
      temp=arr[index];
      arr[index]=arr[i];
      arr[i]=temp;
  }
  for(int i=0;i<arr_size;i++)
        cout<<arr[i]<<" ";
    return 0;
}
