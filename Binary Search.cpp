#include <iostream>

using namespace std;

int main()
{
    long long searchNumber;
    cin>>searchNumber;
    int sizeOfArray;
    cin>>sizeOfArray;
    long long arr[100];
    int flag=0;
    for (int i=0;i<sizeOfArray;i++){
        cin>>arr[i];
    }
    int start=0;
    int myend=sizeOfArray-1;

    while(start<=myend){
         int index=(myend+start)/2;
        if (arr[index]==searchNumber){
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
        else if (arr[index]>searchNumber){
            for (int i=start;i<index;i++){
               if (i<index-1)
               cout<<arr[i]<<" ";
               else
                cout<<arr[i]<<endl;

             }

          myend=index-1;
            }
    else {
         for (int i=index+1;i<=myend;i++){
            if(i<myend)
            cout<<arr[i]<<" ";
            else
              cout<<arr[i]<<endl;
    }

    start=index+1;
    }
            }
            if (flag==0)
            cout<<"NO"<<endl;
    return 0;
}
