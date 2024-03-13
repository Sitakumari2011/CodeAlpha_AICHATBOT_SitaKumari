#include<string.h>
#include<iostream>
#include<conio.h>
#include<process.h>
#include<stdio.h>

using namespace std;

int main()
{
    char input[128];
    cout<<".....................welcome talk with S.I.T.A..................\n";

    while (1)
    {
       cout << "Enter your input: ";
       fgets(input, sizeof(input), stdin);
       input[strcspn(input, "\n")] = '\0'; // Remove newline character from input

          if(strcmp(input, "hi")==0){
             cout<<"Hello mam, I am S.I.T.A\n";
         }
         else if(strcmp(input,"how are you")==0){
             cout<<"I am fine\n";

         }
        else if(strcmp(input,"what are you doing")==0){
             cout<<"I am learning something new\n";
         }
        else if (strcmp(input,"subtract")==0){
                int num1, num2;
                cout<<"Give first number\n";
                cin>>num1;
                cout<<"Give second number\n";
                cin>>num2;
                cout<<"The difference is "<<num1-num2<<"\n";
          
         }
         else if (strcmp(input,"addition")==0){
                   int num1,num2;
                  cout<<"Give first number\n";
                  cin>>num1;
                  cout<<"Give second number\n";
                  cin>>num2;
                  cout<<"The addition is "<<num1+num2<<"\n";
         }
                  
        else if(strcmp(input,"bye")==0){
            cout << "Goodbye!\n";
            break;
        }

        else{
            cout << "Sorry, I don't understand.\n";
        }

    }
    return 0;
}
