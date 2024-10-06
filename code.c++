#include<iostream>
#include<string.h>
using namespace std;

char encryptMssg (char c) //FUNCTION 
{
    if(c>='A' && c<='Z') // FOR UPPERCASE
    {
    return (c+3>'Z')?c-23:c+3; 
    }
    else if (c>='a' && c<='z') // FOR LOWERCASE
    {
        return (c+3 >'z')?c-23:c+3;
    }
    return c; // FOR NON-ALPHABATIC characters 
}

int main()
{
    string message;
    cout<<"Enter your message ";
    getline(cin,message); // GETLINE FOR MULTUPLE LINE SATEMENT AND IT WILL REAN SPACE ALSO 
    string encryptedMessage;
    for(char c:message) 
    {
        encryptedMessage+=encryptMssg(c); // NOT USING +, SINGLE CHARATER WILL BE STORED IT WILL NOT MAKE A STRING
    }
    cout<<"The Encrypted message is "<<encryptedMessage;
    return 0;

}