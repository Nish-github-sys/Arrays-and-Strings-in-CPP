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


/*==========OUTPUTS==========
Enter size of Array:5
Enter Marks in Array: 
Subject1:91
Subject2:92
Subject3:93
Subject4:94
Subject5:95
Marks are:
91 92 93 94 95 
Sum of Marks is:465
Average of Marks is:93
*/
    
