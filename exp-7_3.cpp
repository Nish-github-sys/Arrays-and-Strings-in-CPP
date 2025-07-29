//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-7

//Program-3
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
    cout<<"Marks are: ";
    
    for(int i=0; i<5; i++){
    cout<<marks[i]<<" ";
    }

    cout<<"\nReversed Marks are: ";
    for(int k=(n-1); k>=0; k--){
        cout<<marks[k]<<" ";
    }

    return 0;
}