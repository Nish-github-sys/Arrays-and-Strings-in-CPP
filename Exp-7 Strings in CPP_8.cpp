//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-7

//Program-8
#include<iostream>
using namespace std;

int main(){

    string str1=" ";
    string str_rev=" ";

    cout<<"Enter input for String: ";
    cin>>str1;

    cout<<"Entered String is: "<<str1<<"\n";

    for(int i=str1.length(); i>=0; i--){
        str_rev+=str1[i];
    }
    cout<<"Reversed String is: "<<str_rev;
    return 0; 
}


/*==========OUTPUTS==========
Enter input for String: program
Entered String is: program
Reversed String is: margorp
*/
