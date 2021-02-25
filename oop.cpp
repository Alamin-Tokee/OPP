#include<bits/stdc++.h>
using namespace std;

/*class Car {
  public:
    string brand;   
    string model;
    int year;
};

int main() {
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}*/


//Method Inside in  Class
/*class MyClass{
  public:
  void myMethod(){
    cout<<"Hello World";
  }
};*/

//Method ouside in class
/*
class MyClass{
  public:
  void myMethod();
};
void MyClass::myMethod(){
  cout<<"Hello World";
}*/
//Outside function with parameter
/*
class Car{
  public:
  int speed(int maxSpeed);
};
int Car::speed(int maxSpeed){
  return maxSpeed;
}
int main(){
  Car myOb;
  cout<<myOb.speed(200);
  return 0;
}*/
//Constructor inside in  class
/*
class Car{
  public:
  string brand;
  string model;
  int year;
  Car(string x,string y,int z){
    brand=x;
    model=y;
    year=z;
  }
};*/
/*class Car {        
  public:          
    string brand;  
    string model;  
    int year;      
    Car(string x, string y, int z); 
};
Car::Car(string x,string y,int z){
  brand=x;
  model=y;
  year=z;
}

int main() {
  
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}*/
//Access Modifier
/*class MyClass{
  public:
  int x;
  private:
  int y;
};

int main(){
  MyClass myOb;
  myOb.x=25;
  myOb.y=50;
  return 0;
}*/
//Access Modifier
/*class Employee{
  private:
  int salary;
  public:
  void setSalary(int s){
    salary=s;
  }
  int getSalary(){
    return salary;
  }
};
int main(){
  Employee myOb;
  myOb.setSalary(50000);
  cout<<myOb.getSalary();
  return 0;
}*/

//Inheritance

/*class Vehicle{
  public:
  string brand="Ford";
  void honk(){
    cout<< "Tuut, tuut!\n";
  }
};

class Car:public Vehicle{
  public:
  string model="Mustang";
};

int main(){
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}*/

/*class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};


class MyChild: public MyClass {
  public:
  void myFunction() {
      cout << "Some content in parent class." ;
    }
};

class MyGrandChild: public MyChild {
  public:
  void myFunction() {
      cout << "Some content in parent class." ;
    }
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}
*/

/*class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

class MyChildClass: public MyClass, public MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}*/
//Protected acceess modifier
/*class Employee {
  protected: // 
    int salary;
};


class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}*/


// Polimorphism
/*class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};


class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
   }
};

class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}*/
//File read line by line
/*int main(){
  ofstream myWriteFile("filename.txt");
  myWriteFile<< "Files can be tricky, but it is fun enough!";

  myWriteFile.close();

  string myText;

  
  ifstream MyReadFile("filename.txt");

  while (getline (MyReadFile, myText)) {
    cout << myText;
  }

  
  MyReadFile.close();
}
*/

int main(){
  try{
    int age=13;
    if(age>=15){
      cout<<"Access Granted - you are old enough";
    }else{
      throw(age);
    }
  }
  catch(int myNum){
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;
  }
  return 0;
}



