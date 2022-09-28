#include <iostream>
#include <string>
 
int main(){
  double temp_in, temp_out, ctof, ftoc;
  std::string unit_in, unit_out;
  bool valid_unit;
  
  ftoc = 5.0/9.0;
  ctof = 9.0/5.0; 

  std::cin >> temp_in >> unit_in;

  if (unit_in == "F"){
    valid_unit = true;
    unit_out = "C";
    temp_out = ftoc * (temp_in - 32);
  }
  else if(unit_in == "C"){
    valid_unit = true;
    unit_out = "F";
    temp_out = (ctof * temp_in) + 32;
  }
  else {
    valid_unit = false;
  }

  if (valid_unit){
    std::cout << temp_out << " " << unit_out;
  }
  else {
    std::cout << "Unit not recognised";
  }

}