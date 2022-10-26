#include <iostream>

int main() {
  double pesos, reais, soles; 
  double dollars;
  
  std::cout<<"Enter number of Colombian Pesos: "<<"\n";
  std::cin>>pesos; 
  std::cout<<"Enter number of Reais: "<<"\n";
  std::cin>>reais;
  std::cout<<"Enter number of Soles: "<<"\n";
  std::cin>>soles;
  //Pesos to USD = 1: 0.00020, Reais to USD= 1: 0.19, Soles to USD= 1:0.25
  dollars = (0.00020*pesos) + (0.19*reais) + (0.25*soles); 
  std::cout<<"US Dollars = $ "<<dollars<<"\n";
}