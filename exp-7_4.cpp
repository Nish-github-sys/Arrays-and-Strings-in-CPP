//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-7

//Program-4
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
    cout<<"Marks are:\n";
    
    for(int i=0; i<n; i++){
    cout<<marks[i]<<" ";
    }

    int sum=0;
    for(int l=0; l<n; l++){
        sum+=marks[l];
    }
    cout<<"\nSum of Marks is:"<<sum;
    int avg=sum/n;
    cout<<"\nAverage of Marks is:"<<avg;
    return 0;
}


     
    