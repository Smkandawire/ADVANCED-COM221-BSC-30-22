#include <iostream>

using namespace std;
int main(){

    //Display the options to the user
    cout << "Please select the area of the shape to calculate" << endl;
    cout << " 1.Square \n 2.Rectangle \n 3.Trangle \n 4.Quit Program \n \n " << endl;
    cout << "Enter selection: " ;

    //input on selection
    int selection;
    cin >> selection;

   //Area of the triangle, rectangle and triangle
   int value1, value2;
  
   //Switch statement for choosing
   switch(selection){
     case 1:
     cout << "Calculate the area of Square" <<endl;
     cout << " NB:such that both sides are equal \n Enter value: ";
     cin >> value1;
     cout << "The area of square is " << value1 * 2 <<endl; 
        break;

      case 2:
     cout << "Calculate the area of Rectangle" <<endl;
     cout << "Enter length: ";
     cin >> value1;
     cout << "Enter width: ";
     cin >> value2;
     cout << "The area of Triangle is " << value1 * value2 <<endl;
        break;

      case 3:
     cout << "Calculate the area of Triangle" <<endl;
     cout << "Enter base: ";
     cin >> value1;
     cout << "Enter heigth: ";
     cin >> value2;
     cout << "The area is " << 0.5 * value1 * value2 << endl;
        break;

      case 4:
         //break the process
          cout << "Program exited" << endl;
        break;

      default:
   
      cout << "Your input was: "<< selection <<" which is an invalid input \n Please enter a valid input!!!" <<endl;
   }
    return 0;
}
