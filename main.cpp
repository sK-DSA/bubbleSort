/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// #include <iostream>

// using namespace std;

// int main()
// {
//   int flag=0,a[100],i,n,val;
//   cout<<"enter the number and value";
//   cin>>n;
//   cout<<"enter the value";
//   cin>>val;
//   cout<<"enter the arry";
//   for(i=0;i<n;i++){
//       cin>>a[i];
//   }
//   for(i=0;i<n;i++)
//   {
//       if(a[i]==val){
//           flag=1;
//             break;
//       }
//             else{
//                 continue;
//             }
//   }
//  if(flag==1){
// cout<<"found"<<i+1<<"position";
//       }
//   else{
//       cout<<"not found";
      
       
//   }
//     return 0;
// }


#include <iostream>

using namespace std;
void display(int a1[],int n1){
    int n;
    for(int i=0;i<n1;i++){
        cout<<a1[i];
    }
}
void bubbleSort(int a[],int n){
    int i ,j,temp=0;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    display(a,n);
}


int main (){
    void display(int [],int);
    int i ,a[100],j,size;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
     void bubbleSort(int a[],int);
     bubbleSort(a,size);
   return 0; 
}












