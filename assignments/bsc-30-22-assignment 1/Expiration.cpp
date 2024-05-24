#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main (){
  //seed the random number generator
  srand(time(nullptr));

  //decleration of variable
  int daysUntilExpiration;

  // Generate and print 10 randdom numbers between 1 and 11
  for(int i = 0; i < 10; ++i){
    int daysUntilExpiration = rand() % 12;
  }
  if( daysUntilExpiration <= 10){
    cout <<"Your subscription will expire soon.Renew now!" <<endl;
  } else if (daysUntilExpiration <= 5){
    cout << "Your subscrption expires in "<< daysUntilExpiration << "\n Renew now and save 10% " << endl; 
  }else if (daysUntilExpiration == 1){
    cout << "Your subscription expires within a day! \n Renew now and save 20%!" <<endl;
  }else if(daysUntilExpiration == 0){
    cout << "Your subscription has expired." << endl;
  }else
    cout << "You have an active subscrption. " <<endl;

    return 0;
   
}