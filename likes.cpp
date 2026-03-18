#include <string>
#include <vector>
#include <cstdio>
#include <iostream>

using namespace std;
string likes(const vector<string> &names)
{
    string result;
    if(names.size() < 1){
      result = "no one likes this";
    }
    if(names.size() == 1){
      result = names[0] + " likes this";
    }
    if(names.size() == 2){
      result = names[0] + " and " + names[1] + " like this";
    }
    if(names.size() == 3){
      result = names[0] + ", " + names[1]  + " and " + names[2] + " like this";
    }
    else if(names.size() > 3){
      result = names[0] + ", " + names[1] + " and " + to_string(names.size() - 2) + " others like this";
    }
    return result; 
}

int main(){
    vector<string> a {"eslam","Alex", "Jacob", "Mark", "Max","Alex", "Jacob", "Mark", "Max"};
    vector<string> b {"eslam","Alex", "Jacob", "Mark"};
    vector<string> c {"eslam","Alex", "Jacob"};
    vector<string> d {"eslam","Alex"};
    vector<string> e {"eslam"};
    cout << likes(a) << endl;

    return 0;
}
