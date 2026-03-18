#include <iostream>
#include <utility>

int main()
{

    // if the data type are the same
    std::pair<std::string ,std::pair<std::string,std::pair<std::string,std::string>>> nestedpair;
    nestedpair.first = "Eslam";
    nestedpair.second.first = "123550";
    nestedpair.second.second.first = "34";
    nestedpair.second.second.second = "173.5";

    for(auto pair_element : {nestedpair.first,nestedpair.second.first,nestedpair.second.second.first,nestedpair.second.second.second}){
        std::cout << pair_element << std::endl;
    }

    std::cout << "------------------" << std::endl;

// if the data type are different must convert to string
    std::pair<std::string ,std::pair<int,std::pair<int,double>>> nestedpair2;
    nestedpair2.first = "Eslam";
    nestedpair2.second.first = 123550;
    nestedpair2.second.second.first = 34;
    nestedpair2.second.second.second = 173.5;   
    for(auto pair_element : {nestedpair2.first, 
                             std::to_string(nestedpair2.second.first), 
                             std::to_string(nestedpair2.second.second.first), 
                             std::to_string(nestedpair2.second.second.second)}){
        std::cout << pair_element << std::endl;
    }


    return 0;
}

