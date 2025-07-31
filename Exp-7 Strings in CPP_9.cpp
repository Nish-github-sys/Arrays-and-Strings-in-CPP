//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-7

//Program-9
#include<iostream>
using namespace std;

int main(){

    string str1=" ";
    string str_rev=" ";
    int flag=0;

    cout<<"Enter input for String: ";
    cin>>str1;

    cout<<"Entered String is: "<<str1<<"\n";

    for(int i=str1.length(); i>=0; i--){
        str_rev+=str1[i];
    }
    cout<<"Reversed String is: "<<str_rev<<endl;

    for(int j=0; j<=str1.length()/2; j++){
        if(str1[j]==str1[str1.length()-j-1]){
            flag=1;
        }

        else{
        cout<<"Not a Palindrome.";
        break;
        }
    }

    if(flag==1){
        cout<<"String is a Palindrome.";
    }
    return 0; 
}


/*==========OUTPUTS==========
Enter input for String: madam
Entered String is: madam
Reversed String is: madam
String is a Palindrome.

Enter input for String: apple
Entered String is: apple
Reversed String is: elppa
Not a Palindrome.
*/
