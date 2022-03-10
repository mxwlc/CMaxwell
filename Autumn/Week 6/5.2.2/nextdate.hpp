#include <iostream>
 
bool leap_year(int year){
    bool ly = false;
 
    if( (year % 4) == 0){ 
 
    if( (year % 100) == 0){ 
      if((year % 400) == 0){
        ly = true;
      }
    }
    else{ 
      ly = true; 
    }
  }
  return ly;

}
 
void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
 
  //is the current year [y1] a leap year
  bool isleap = leap_year(y1);
  
  //does the month have 30 [0] or 31 days [1] or is it february [2]
  int days;

  if(m1 == 2 || m1==4 || m1==6 || m1==9 || m1==11){
    days = 0;
  }
  else if(m1 == 1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12){
    days = 1;
  }
  else if(m1 == 2){
    days = 2;
  }

  //is the current day [m1] the last day of the month
  bool lastday = false;

  //month with 30 days, days case 0
  if(days == 0 && d1== 30){
    lastday = true;
  }

  //month with 31 days, days case 1
  else if(days == 1 && d1 == 31){
    lastday = true;
  }

  //february, days case 2
  else if(days == 2 && d1 == 28){
    lastday = true;
  }
  
  //feb in leap year
  else if(days == 2 && d1 == 29 && isleap == true){
    lastday = true;
  }
  
  //is current day [d1] the last day of the year
  int lastdayofy = false;

  if(d1 == 31 && m1 == 12){
    lastdayofy = true;
  }

  //new day
  bool newmonth = false;

  if(lastday == false){
    d2 = d1 + 1;
  }
  else{
    d2 = 1;
    newmonth = true;
  }

  //new month
  bool newyear = false;

  if(newmonth == true){
    m2 = m1 + 1;
  }
  if(newmonth == true && lastdayofy == true){
    newyear = true;
    m2 = 1;
  }
  else if(newmonth == false){

    m2 = m1;
  }

  //new year
  if(newyear == true){
    y2 = y1 + 1;
  }
  else{
    y2 = y1;
  }
}

int main(){
  int d1, m1, y1, d2, m2, y2;

  //input date
  std::cout << "Please enter the day, month, year" << std::endl;
  std::cin >> d1 >> m1 >> y1;

  //call function
  next_date(d1, m1, y1, d2, m2, y2);

  //prints the result
  std::cout << "The next date is " << d2 << "/" << m2 << "/" << y2;

}