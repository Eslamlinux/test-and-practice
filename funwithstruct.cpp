#include <iostream>

int Size ;
struct benuts{
    private:
    int b_price;
    float b_total;
    public:
    std::string name = "unkown";
    void set_b(std::string item_name ,float price, float total){
        name = item_name;
        b_price = price;
        b_total = total;
    }
    float get_b(bool price_0_total_1){
        if(price_0_total_1 == false)
        return b_price;
        return b_total;
    }

};


void printdata(benuts b_object){
    std::cout <<"the " << b_object.name << " price is: ";
    std::cout << b_object.get_b(0);
    std::cout << "\ntotal is: ";
    std::cout << b_object.get_b(1);
}

void print_arr_data(benuts b_object[]){
    for(int i =0; i < Size ;i++){
        std::cout <<"the " << b_object[i].name << " price is: ";
        std::cout << b_object[i].get_b(0);
        std::cout << "\ntotal is: ";
        std::cout << b_object[i].get_b(1);
        std::cout <<std::endl;
    }
}

int main(){
Size =5;

benuts wheat;
wheat.set_b("wheat", 30,350.5);
printdata(wheat);

std::cout << std::endl;
benuts all_b[Size];
all_b[0].set_b("wheat",30.3,50.5);
all_b[1].set_b("benaut",35.3,100.5);
all_b[2].set_b("ric",31.3,500.5);
all_b[3].set_b("ric",31.3,500.5);
all_b[4].set_b("ric",31.3,500.5);

print_arr_data(all_b);

    return 0;
}