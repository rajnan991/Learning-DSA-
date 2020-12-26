/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


int search(int arr[],int n,int x ){
    int i;
    for(i=0; i<n; i++)
    if (arr[i]==x)
    return i;
    return -1;
    
}
 
 
int main(void){
    int arr[]={ 1,2,3,4,5,6,7};
    int x=6;
    int n= sizeof(arr)/sizeof(arr[0]);
    

    
int result= search(arr, n, x);
    (result==-1)
    ? cout<<"Element is not present in the array."
    : cout<<"Element is present at index " << result ;
    return 0;




}
