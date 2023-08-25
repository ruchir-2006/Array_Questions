#include<iostream>
using namespace std;


void swaparray(int arr[], int size)
{
    int i; 
    for ( i = 0; i <size; i=i+2)
    {
        if(i<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<"New array is :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[100]={1,2,3,4,5,6};
    int size=6;

    cout<<"Initial array was"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    swaparray(arr,size);
    


    return 0;
}