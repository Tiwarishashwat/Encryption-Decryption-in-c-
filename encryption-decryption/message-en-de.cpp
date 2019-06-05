#include<iostream>
using namespace std;
void send(char str1[100]);
void receive(char str2[100]);
int main()
{
    char str[100];
    char str3[2];
    cout<<"Welcome to Shashwat's protections\n";
    cout<<"Choose an option:\n";
    cout<<"A)Encrypt\n";
    cout<<"B)Decrypt\n";
    cin.getline(str3,2);
    if(str3[0]=='a'||str3[0]=='A')
    {
    cout<<"write a message that you would like to encrypt\n";
    cin.getline(str,100);
    send(str);
    }
    else if(str3[0]=='b'||str3[0]=='B')
    {
    cout<<"write a message that you would like to decrypt\n";
    cin.getline(str,100);
    receive(str);
    }
    else
    {
        cout<<"choose correct option!!";
    }
}
void send(char msg[100])
{
    for(int i=0;(i<100 && msg[i]!='\0');i++)
    msg[i]=msg[i]+3;
    cout<<"Encrypted string is\t";
    cout<<msg<<"\n";
}
void receive(char msg[100])
{
    for(int i=0;(i<100 && msg[i]!='\0');i++)
    msg[i]=msg[i]-3;
    cout<<"Decrypted string is\t";
    cout<<msg<<"\n";
}
