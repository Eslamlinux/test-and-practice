#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

string to24HourTime(int hour, int minute, const string& period) {
  string resetHtime = "00";
  string resetMtime = "00";

  string result;
  if(hour == 12 &&  period == "pm" ){
    result += to_string(hour) ;
  }
  if(hour >= 1 && hour <= 9 && period == "pm" ){
    result +=  to_string(hour + 12) ;
  }
  if(hour >= 10 && hour <= 11 && period == "pm" ){
    result += to_string(hour + 12) ;
  }
  if(minute >= 1 && minute <= 9 && period == "pm" ){
    result += resetMtime[0] + to_string(minute) ;
  }
  if(minute >= 10 && minute <= 59 && period == "pm" ){
    result += to_string(minute) ;
  }
  if(minute == 0 && period == "pm" ){
    result += resetMtime ;
  }
  

 
  if(hour >= 1 && hour <= 9 && period == "am" ){
    result += resetHtime[0] + to_string(hour) ;
  } 
  if(hour >= 10 && hour <= 11 && period == "am" ){
    result += to_string(hour) ;
  }   

  if(hour == 12 && period == "am" ){
    result += resetHtime ;
  }
  if(minute >= 1 && minute <= 9 && period == "am" ){
    result += resetMtime[0] + to_string(minute)  ;
  }
  if(minute >= 10 && minute <= 59 && period == "am" ){
    result += to_string(minute) ;
  }
  if(minute == 0 &&  period == "am" ){
    result += resetMtime;
  } 
  return result;
}

  int main() {
    int hour, minute;
    string period;

    cout << "Enter time in 12-hour format (hh:mm am/pm): ";
    cin >> hour;
    char colon;
    cin >> colon >> minute;
    cin >> period;

    string result = to24HourTime(hour, minute, period);
    cout << "Time in 24-hour format: " << result << endl;

    return 0;
  }
  
