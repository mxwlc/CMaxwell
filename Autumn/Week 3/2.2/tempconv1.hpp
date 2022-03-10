#include <iostream>
#include <string>
 
int main(){
  double temp_in, temp_out, ctof, ftoc;
  std::string unit_in, unit_out;
  
  ftoc = 5.0/9.0;
  ctof = 9.0/5.0; 

  std::cin >> temp_in >> unit_in;

  if (unit_in == "f"){
    unit_out = "c";
    temp_out = ftoc * (temp_in - 32);
    std::cout << temp_out << " " << unit_out;
  }
  else{
    unit_out = "f";
    temp_out = (ctof * temp_in) + 32;
    std::cout << temp_out << " " << unit_out;
  }
}