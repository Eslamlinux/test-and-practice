#include <iostream>
using namespace std;

class cars{
    protected:
    private:
    int model = 1900;
    int dateofmake;
    bool exp;
    public:
    string name = "unkwon";
    string color = "white";
    int doors = 4;

    // using set function to set the class data

    void setcars(int mod,int yearDate,bool ex){
    model = mod;
    dateofmake = yearDate;
    exp = ex;
    }
    auto getcars(){
    cout << name << endl;
    cout << color << endl;
    cout << model << endl;
    cout << doors << endl;
    cout << dateofmake << endl;
    cout << exp << endl;
    }
    // using constract to set the class data
    /*cars(string na,string co,int mo,int doo,int da,bool e){
    name = na;
    color = co;
    model = mo;
    doors = doo;
    dateofmake = da;
    exp = e;
    } */
};
int main(){

cars c1;

//cars c1("bmw","blue",9999,4,2001,false);
c1.setcars(9999,2001,false);
c1.getcars();

return 0;
}
