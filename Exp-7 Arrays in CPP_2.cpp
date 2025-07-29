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


/*==========OUTPUTS==========
Enter size of Array:5
Enter Marks in Array: 
Subject1:91
Subject2:92
Subject3:93
Subject4:94
Subject5:95
Marks are:91 92 93 94 95 
Enter marks to be searched:92
Marks exist. Position:2


Enter size of Array:5
Enter Marks in Array: 
Subject1:91
Subject2:92
Subject3:93
Subject4:94
Subject5:95
Marks are:91 92 93 94 95 
Enter marks to be searched:99
Marks not found.
*/
