//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-7

//Program-5
#include<iostream>
using namespace std;

int main(){

     
    int n;

    cout<<"Enter size of Array:";
    cin>>n;

    cout<<"Enter Marks in Array: \n";

    int marks[n];

    for(int j=0; j<n; j++){
        cout<<"Subject"<<j+1<<":";
        cin>>marks[j];
    }
    cout<<"Marks are:";
    
    for(int i=0; i<5; i++){
    cout<<marks[i]<<" ";
    }
    int temp;
    for(int k=0; k<n; k++){
        for(int l=0; l<n; l++){
            if(marks[k]>marks[l]){
                temp=marks[k];
                marks[k]=marks[l];
                marks[l]=temp;
            }
        }
    }
    cout<<"\nMin is:"<<marks[n-1];
    cout<<"\nMax is:"<<marks[0];

    return 0;
}