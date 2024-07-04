#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    int N=100,t;
    srand(time(0));
    do
    {
    int n=rand()%N;
    int guess;
    cout<<"---GAME START---"<<endl;
    cout<<"ENTER YOUR GUESS AND GUESS=0 FOR QUIT"<<endl;
    cin>>guess;
    while(!(guess==n))
    {
      if((guess>n+5)&&(guess!=0))
      {
          cout<<"TOO LARGE"<<endl;
      }
      else if((guess>n-5)&&(guess<n+5)&&(guess!=0))
      {
          cout<<"NEAR"<<endl;
      }
      else if((guess<n-5)&&(guess!=0))
      {
          cout<<"TOO SMALL"<<endl;
      }
      else 
      {
          break;
      }
     cout<<"---GIVE ANOTHER TRY---"<<endl;
     cin>>guess; 
     cout<<endl;
    }
    
    if(guess==n)
    {
    cout<<"SUCCESSFULLY GUESSED"<<endl;
    }
    cout<<"---GAME END---"<<endl;
    cout<<"AGAIN DO YOU WANT TRY ENTER 1";
    cin>>t;
    }while(t==1);
    cout<<"(*_*) THANKYOU";
    return 0;
}
