#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isemail(string const& address) //testing for @
{
    size_t at_index = address.find_first_of('@', 0);
    return at_index != string::npos;
}
bool isdot(std::string const& address)// testing for the dot
{
    size_t at_in = address.find_first_of('.', 0);
    return at_in != string::npos;
}
int main()
{
    string first, last, adress, a, s, p, e; //Input String Types

    cout<<"Welcome To Extreme Gamers Registration System."<<endl;
      cout<<"Please Notice That All Questions Have To Be Answered."<<endl;
        cout<<"1.Your First Name?"<<endl; //Asking Questions 1-5
    cin>>first;
      cout<<""<<endl;
        cout<<"2.Your Last Name?"<<endl;
    cin>>last;
      cout<<""<<endl;
        cout<<"3.Type Your Age?"<<endl;
    cin>>a;
      cout<<""<<endl;
      if(a>"18"){
        cout<<"Sorry "<<first <<", Only Kids Can Access To This System"<<endl;
      }
      if(a<="18"){
        cout<<"4.Your Phone Number?"<<endl;
    cin>>p;
      cout<<""<<endl;

  cout << "5.Type your email address\n";
  cin >> adress;
  cout<<""<<endl;
if (!isemail(adress)) //Print Missing Symbol @
  {
      cout << "Missing @ symbol\n";
  }
else if (!isdot(adress))
{
    cout << "Missing . symbol after @\n"; //Print Missing . Symbol After @
}
else
{
    cout << "Email accepted.\n"; //Print Email Accepted

cout<<""<<endl;



       cout<<"Thank You For Using Our Service"<<endl<<endl;
        cout<<"You Are Successfully Registered To Coding For Fun 2020 Competition. You Will Get Your Confirmation Email Soon"<<endl<<endl;
    cout<<"See You Soon "<<first<<"!!"<<endl; //Last Greetings
}

      //End Of The Program
    return 0;

}
}
