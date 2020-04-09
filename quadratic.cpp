#include <iostream>
#include <cmath>

int main() {
  int a;
  int b;
  int c;
  
  std::cout<<"Enter a: \n";
  std::cin>>a;
  std::cout<<"Enter b: \n";
  std::cin>>b;
  std::cout<<"Enter c: \n";
  std::cin>>c;
  
  int root1=-(b-(b^2-(4*a*c))^(1/2))/(2*a);
  int root2=-(b+(b^2-(4*a*c))^(1/2))/(2*a);
  
  std::cout<<"Enter a: "<<a<<"\n";
  std::cout<<"Enter b: "<<b<<"\n";
  std::cout<<"Enter c: "<<c<<"\n";
  std::cout<<"Root 1 is "<<root1<<"\n";
  std::cout<<"Root 2 is "<<root2<<"\n";
  
  
  
  
}