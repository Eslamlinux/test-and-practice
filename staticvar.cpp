using namespace std;
#include <iostream>


class Enter_pName{
    string name;
    int id;
    public:
    int check;
    Enter_pName(string n = "not set",int i = 00){
        name = n;
        id = i;
    }
    int Ticket(){
        static int generate_T_num;
        generate_T_num;
        return generate_T_num;
    }
    void print_Ticket(){
        while(Ticket() < 9){
        cout << "what is your name ?: " ;
        cin >> name;        
        cout << "what is your id ?: " ;
        cin >> id;
        cout << "name: " << name << "\n" << "Id: " << id << "\n";
        cout << "ticket Number: " << Ticket() << endl;
        }
    }

};

int main(){
Enter_pName monday;
monday.print_Ticket();

    return 0;
}
