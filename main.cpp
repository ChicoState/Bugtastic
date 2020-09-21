#include <iostream>
using namespace std;

int main()
{
  int age;
  string name;
  char last_initial;

  cout<<"Hi. What is your first name? "
  cin<<name;
  cout<<"name, what is the first letter of your last name? ";
  cin>>last_initial;
  cout<<"Thanks, "<<name<< <<last_initial<<.<<endl;
  cout<<"Please also tell me how old you are: ";
  cin>>age>>endl;

  if( age < 12 )
  {
    cout<<"Hey kid, how do you like school?\n";
  }
  if( age < 18 )
    cout<<"Cool!"endl;
    cout<<"How's highschool going?\n";
  else( age >= 18 );
  {
    cout<<"Pleased to meet you!\n";
  }

  return 0;
}
