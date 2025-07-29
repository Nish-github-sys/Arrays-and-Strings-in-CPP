//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-7

//Program-2
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

    int mark;
    cout<<"\nEnter marks to be searched:";
    cin>>mark;

    for(int m=0; m<n; m++){
        if(marks[m]==mark){
            cout<<"Marks exist. Position:"<<m+1;
            return 0;
        }
    }
cout<<"Marks not found.";
    return 0;
}