#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    std::string findLatestTime(std::string s) {
        char timeArray[5];
        strcpy(timeArray, s.c_str()) ;
        
        if (timeArray[0] == '?') timeArray[0] = (timeArray[1] == '?' || timeArray[1] < '2') ? '1' : '0';
        if (timeArray[1] == '?') timeArray[1] = (timeArray[0] == '1') ? '1' : '9';
        if (timeArray[3] == '?') timeArray[3] = '5';
        if (timeArray[4] == '?') timeArray[4] = '9';
        
        return std::string(timeArray);
    }
};


int main() {
  string inputTime;
  Solution sol;  // Create an instance of Solution class

  cout << "Enter a 12-hour time string with '?' (e.g., 1?:?4): ";
  cin >> inputTime;

  if (inputTime.length() != 5 || inputTime[2] != ':') {
    cerr << "Invalid input format. Please enter a string in HH:MM format." << endl;
    return 1;
  }

  string result = sol.findLatestTime(inputTime);
  cout << "Latest possible time: " << result << endl;

  return 0;
}
