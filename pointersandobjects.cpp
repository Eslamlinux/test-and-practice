// using namespace std;
// #include <iostream>

// class tclass{
//     public:
//     int age;
//     string name;
//     bool isempty(tclass *tocheck);
//     tclass* todelete(tclass* todelete);
//     void prntptr(tclass *entry);
//     tclass* change_It(tclass* entry,string to_change_name = "unkown",int to_change_age =0);
// };
// tclass *ptr = new tclass;
// tclass *emp = new tclass;
// int main(){

// ptr->name = "eslam l";
// ptr->age = 33;
// emp->name = "hassan l";
// emp->age = 28;

// tclass a;

// a.prntptr(ptr);
// a.prntptr(a.change_It(ptr,"aya l",31));
// a.prntptr(ptr);
// cout << boolalpha << a.isempty(ptr);
//     return 0;
// }

// bool tclass::isempty(tclass *tocheck){
//  return tocheck == NULL ? true:false;
// }
// tclass* tclass::change_It(tclass* entry,string to_change_name,int to_change_age ){
//     tclass* newclass = new tclass;
//     newclass = entry;
//     newclass->name = to_change_name;
//     newclass->age = to_change_age;
//     return newclass;
//     }

// void tclass::prntptr(tclass *entry){
//     if(isempty(entry)){
//     return;
//     }
//     cout << entry->name << "\t";
//     cout << entry->age << "\n";
//     }