//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-7

//Program-1
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

    return 0;
}


/*==========OUTPUTS==========
Enter size of Array:5
Enter Marks in Array: 
Subject1:91
Subject2:92
Subject3:93
Subject4:94
Subject5:95
Marks are:91 92 93 94 95 
 */
