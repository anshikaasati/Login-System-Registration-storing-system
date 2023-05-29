
#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

bool IsLoggedIn()
{
    string username, password, un, pw;
    cout<<" Enter username: ";
    cin>>username;
    cout<<" Enter Password: ";
    cin>>password;

    ifstream read("cpp\\" + username + ".text");
    getline(read, un);
    getline(read, pw);

    if (un==username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;

    cout<<"1: Registration\n2: Login\nYour choice: "; cin >> choice;
    if(choice==1)
    {
        string username, password;

        cout<< "select a username: "; 
        cin>> username;
        cout<< "select a password: "; 
        cin>> password;

        ofstream file;
        file.open("cpp\\" + username + ".text");
        file<<username<<endl<<password;
        file.close();

        main();
    }
    else if (choice==2)
    {
        bool status = IsLoggedIn();

        if (!status)
        {
            cout<<"False Login!"<<endl;
            system("PAUSE");
            return 0;
        }
        else
        {
            cout<< "Succesfully logged in!"<<endl;
            system("PAUSE");
            return 1;
        }
    }
}
