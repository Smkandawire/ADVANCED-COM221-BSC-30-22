#include <iostream>
using namespace std;

int main(){
    //prompt user input value
    cout << "Enter an integer between 5 and 10: " <<endl;
    int value;
    cin>>value;

    //while loop
    while (true){
        if(value >= 5 && value<= 10){
     //if the number is between the iteration
        cout << "Your input value " << value << " has been accepted "<<endl;
        break;
      
        }else {
            cout << "Sorry, you entered an invalid number, please try again"<<endl;
            break;
        }
        
    }
    return 0;
}