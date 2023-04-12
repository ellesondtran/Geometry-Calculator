//Elleson Tran
//Roberts
//Geomeetry Calculator
//A program that calculates three different areas of shapes
//FINAL

#include <iostream>

using namespace std;

//calculates a rectangles area
void rectangle(){
  double width;
  double length;
  cout<<"Enter width of the square: ";
  cin>>width;

  cout<<"Enter length of the square: ";
  cin>>length;

  cout<<"Area of square: "<<width*length<<endl<<endl;
}


//calculates a circle area
void circle(){
  double radius;
  cout<<"Enter radius of the circle: ";
  cin>>radius;

  cout<<"Area of circle: "<<3.14*radius*radius<<endl<<endl;
} 


//calculates a triangle area
void triangle(){
  double base;
  double height;
  cout<<"Enter base of the triangle: ";
  cin>>base;

  cout<<"Enter height of the triangle: ";
  cin>>height;

  cout<<"Area of triangle: "<<(base*height)/2<<endl<<endl;
}


int main() {
  
  int user;
  cout<<"Select a shape to find the area of:"<<endl<<"1 = Rectangle"<<endl<<"2 = Circle"<<endl<<"3 = Triangle"<<endl<<"4 = Exit"<<endl;
  cin>>user;

  while(user !=4){
    if(user == 1){
      rectangle();
      cout<<"Select a shape to find the area of:"<<endl<<"1 = Rectangle"<<endl<<"2 = Circle"<<endl<<"3 = Triangle"<<endl<<"4 = Exit"<<endl;
      cin>>user;
    }
    if(user == 2){
      circle();
      cout<<"Select a shape to find the area of:"<<endl<<"1 = Rectangle"<<endl<<"2 = Circle"<<endl<<"3 = Triangle"<<endl<<"4 = Exit"<<endl;
      cin>>user;
    }
    if(user == 3){
      triangle();
      cout<<"Select a shape to find the area of:"<<endl<<"1 = Rectangle"<<endl<<"2 = Circle"<<endl<<"3 = Triangle"<<endl<<"4 = Exit"<<endl;
      cin>>user;
    }
  }
  if(user == 4){
    cout<<"Bye!";
  }

}