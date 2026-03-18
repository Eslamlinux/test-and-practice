#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

struct stuff
{
    std::string item_name;
    std::string describe;
    std::string made_by;
    std::string barcode;
    std::string manufacturing_date;
    std::string expiration_date;
    std::string supplier_name;
    std::string supplier_phone;
    size_t item_count , item_id_number;
    std::vector<stuff> data;
    int lastdata_index = data.size();
    void add_item();
    void edit_item();
    void delete_item();
    void search_item();
    bool print_entry_by_id(size_t);
    
    ~stuff();
};
struct showing_stuff:stuff
{
    char entry;
    void main_manu();
    void print_all();
    ~showing_stuff();
};

int main()
{
showing_stuff a;
    while ((a.entry != 'q'))
    {
        a.main_manu();
    }
    

    return 0;
}

    void stuff::add_item()
    {
        stuff new_data;
        system("clear");
        std::cout << "enter the item Name\n";
        std::getline(std::cin,new_data.item_name);
        std::cout << "enter the item id or number\n";
        // std::cin.ignore(1000,'\n');
        std::cin.clear();
        while(!(std::cin>>new_data.item_id_number))
        {
            std::cout << "Invalid input! Please enter a NUMBER\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }    
        std::cin.ignore(1000,'\n');
        std::cout << "enter the item description\n";
        std::getline(std::cin,new_data.describe);
        std::cout << "enter the item Made By\n";
        std::getline(std::cin,new_data.made_by);
        std::cout << "enter the item barcode\n";
        std::getline(std::cin,new_data.barcode);
        std::cout << "enter the item manufacturing date\n";
        std::getline(std::cin,new_data.manufacturing_date);
        std::cout << "enter the item expiration date\n";
        std::getline(std::cin,new_data.expiration_date);
        std::cout << "enter the item supplier name\n";
        std::getline(std::cin,new_data.supplier_name);
        std::cout << "enter the item supplier phone\n";
        std::getline(std::cin,new_data.supplier_phone);
        std::cout << "enter the item count\n";
        if(!(std::cin >>new_data.item_count))
        {
            std::cout << "you cant add char in count must be number\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            return;
        } 
        data.push_back(new_data);
        if(!new_data.item_name.empty())
        {
            system("clear");
            std::cout << "Item (" << new_data.item_name << ") added successfully!\n";
        }

    }
    void showing_stuff::main_manu()
    {
        // std::cin.clear();
        // std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "\n===== welcome to Stuff item main menu program =====\n";
        std::cout << "\n-----------------------------------------------------\n";
        std::cout << "to add items press [i] \n";
        std::cout << "to showing all items press [p] \n";
        std::cout << "to edit items press [e] \n";
        std::cout << "to delete items press [d] \n";
        std::cout << "to search for an items press [s] \n";
        std::cout << "to exit press [q] \n";
        std::cin >> entry;
        std::cin.ignore(1000,'\n');
        switch(entry)
        {
            case 'i':
            stuff::add_item();
            break;
            case 'p':
            std::cout << "======= stuff item =========\n";
            print_all();
            break;
            case 'e':
            stuff::edit_item();
            break;
            case 'd':
            stuff::delete_item();
            break;
            case 's':
            stuff::search_item();
            break;
            case 'q':
            system("clear");
            std::cout << "bye bye\n";
            break;

            default:
            system("clear");
            std::cout << "wrong entry!!!\n";
            break;
        }
    }

    void showing_stuff::print_all()
    {
        if(data.empty())
        {
            system("clear");
            std::cout << "sorry nothing to show it\n";
            return;
        }
        system("clear");
        for(auto c :data)
        {
            std::cout << "======================-------------------------------\n";
            print_entry_by_id(c.item_id_number);
            std::cout << "=====================--------------------------------\n";
        }
    }
    bool stuff::print_entry_by_id(size_t id)
    {  
        bool if_found = false;
        for(int i = 0; i < data.size(); i++)
        {
            if(data[i].item_id_number == id)
            {
                if_found = true;
                std::cout << "Item Name:...........| " << data[i].item_name << std::endl;
                std::cout << "Item ID:.............| " << data[i].item_id_number << std::endl;
                std::cout << "Item description:....| " << data[i].describe << std::endl;
                std::cout << "Item Made By:........| " << data[i].made_by << std::endl;
                std::cout << "Item BarCode:........| " << data[i].barcode << std::endl;
                std::cout << "Manufacturing Date:..| " << data[i].manufacturing_date << std::endl;
                std::cout << "Expiration Date:.....| " << data[i].expiration_date << std::endl;
                std::cout << "Supplier Name:.......| " << data[i].supplier_name << std::endl;
                std::cout << "Supplier Phone:......| " << data[i].supplier_phone << std::endl;
                std::cout << "Item Count:..........| " << data[i].item_count << std::endl;
                break;
            }
        }
        return if_found;
    }

    void stuff::search_item()
    {
        char entrynum;
        system("clear");
        std::cout << "search by id press [1] ""that will show the courrect item"" \n";
        std::cout << "search by name press [2] ""that will show all item have the same name"" \n";
        std::cin >> entrynum;
        if(!isdigit(entrynum) || entrynum-'0' > 2 || entrynum-'0' <1)
        {
            system("clear");
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "you cant add character or more than 1 or 2\n";
            return;
        }
        std::cin.ignore(1000,'\n');
        if(entrynum == '1')
        {
            if(data.empty())
            {
                system("clear");
                std::cout << "sorry nothing to search for\n";
                return;
            }
            int id =0;
            system("clear");
            std::cout << "enter the id to search\n";
            if(!(std::cin >> id))
            {
            std::cout << "you cant add character or more than 1 or 2\n";
            return;
            }
            else
            if(print_entry_by_id(id) == false)
            {
                system("clear");
                std::cout << "sorry what you search for is not found\n";
            }
            else
            {
                system("clear");
                std::cout << "=========================\n";
                print_entry_by_id(id);
                std::cout << "=========================\n";
            }


        }
        if(entrynum == '2')
        {
            if(data.empty())
            {
                system("clear");
                std::cout << "sorry nothing to search for\n";
                return;
            }
            system("clear");
            std::vector<stuff> what_is_found;
            std::string name;
            size_t count = 0;
            std::cout << "enter item name to search\n";
            std::getline(std::cin,name);
            for(int i = 0; i < data.size(); i++)
            {
                std::string temp = data[i].item_name;   
                std::transform(temp.begin(),temp.end(),temp.begin(),[](unsigned char c){return std::tolower(c);});
                std::transform(name.begin(),name.end(),name.begin(),[](unsigned char c){return std::tolower(c);});
                if(temp.find(name,0) != std::string::npos)
                {
                    what_is_found.push_back(data[i]);
                    count++;
                }
                else
                {
                    std::cout << "The name not found or not right\n";
                    
                    break;
                }
            }
            if(count > 0)
            {
                system("clear");
                std::cout << "=========================\n";
                std::cout << "found " << count << " result" << "\n";
                for(auto c:what_is_found)
                {
                    std::cout << "=====================--------------------------------\n";
                    print_entry_by_id(c.item_id_number);
                    std::cout << "=====================--------------------------------\n";
                }
            }
        }
    }

    void stuff::delete_item()
    {
        system("clear");
        std::cout << "please enter the item ID you want to delete\n";
        size_t ID = 0;
        while(!(std::cin >> ID))
        {
            system("clear");
            std::cout << "please add ID number\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
        
            for(int i = 0; i < data.size(); i++)
            {
                if(data[i].item_id_number == ID)
                {
                    system("clear");
                    std::cout << "are you sure you want to delete this item \n";
                    std::cout << "Item Name: " << data[i].item_name << " Item ID: "  << data[i].item_id_number << " forever?\n";
                    std::cout << "[y] for yes & [n] for ignore\n";
                    char y_or_n;
                    std::cin >> y_or_n;
                    if(y_or_n == 'n' || y_or_n == 'N')
                    {
                        system("clear");
                        break;
                    }
                    else
                    {
                    std::cin.ignore();
                    std::cin.clear();
                    system("clear");
                    std::cout << "are you sure?\n";
                    std::cout << "[y] for yes & [n] for ignore\n";
                    std::cin >> y_or_n;
                    if(y_or_n == 'n' || y_or_n == 'N')
                    {
                        system("clear");
                        break;
                    }
                    else
                    {
                        system("clear");
                        data.erase(data.begin()+i);
                        std::cout << "Item deleted successfully!\n";
                    }
                    }
                }
                else
                {
                    if(i != data.size()-1)
                    continue;
                    system("clear");
                    std::cout << "The ID not found or not right\n";
                    
                    break;
                }
            }

    }

    void stuff::edit_item()
    {
        system("clear");
        std::cout << "please enter the item ID you want to edit\n";
        size_t ID = 0;
        std::cin >> ID;
        for(int i = 0; i < data.size(); i++)
            {
                system("clear");
                std::cin.ignore();
                std::cin.clear();
                std::cout << "if you dont want to edit this section just press Enter to skip it\n";
                std::cout << "=====================================================================\n";
                if(data[i].item_id_number == ID)
                {
                    stuff new_data;
                    std::cout << "To chang >> " << data[i].item_name <<" << Name >> Enter the New Item Name\n";
                    std::string temp ="";
                    std::getline(std::cin,temp);
                    if(!temp.empty())
                    {
                        data[i].item_name =temp;
                        temp ="";
                    }
                    std::cout << "To chang ID >> " << data[i].item_id_number <<" << Enter the New Item ID or Number\n";
                    std::cin.clear();
                    while(!(std::cin>>data[i].item_id_number))
                        {
                            std::cout << "Invalid input! Please enter a NUMBER\n";
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                        }    
                    std::cin.ignore(1000,'\n');
                    std::cout << "To chang >> Description << " << data[i].describe <<" Enter the New Item Description\n";
                    std::getline(std::cin,temp);
                    if(!temp.empty())
                    {
                        data[i].describe = temp;
                        temp ="";
                    }
                    std::cout << "To chang >> Made By << " << data[i].made_by <<" Enter the New Item Made By\n";
                    std::getline(std::cin,temp);
                    if(!temp.empty())
                    {
                        data[i].made_by = temp;
                        temp ="";
                    }
                    std::cout << "To chang >> Barcode << " << data[i].barcode <<" Enter the New Item Barcode\n";
                    std::getline(std::cin,temp);
                    if(!temp.empty())
                    {
                        data[i].barcode = temp;
                        temp ="";
                    }
                    std::cout << "To chang Manufacturing Date >> " << data[i].manufacturing_date <<" << Enter the New Item Manufacturing Date\n";
                    std::getline(std::cin,temp);
                    if(!temp.empty())
                    {
                        data[i].manufacturing_date = temp;
                        temp ="";
                    }
                    std::cout << "To chang expiration Date >> " << data[i].expiration_date <<" << Enter the New Item expiration date\n";
                    std::getline(std::cin,temp);
                    if(!temp.empty())
                    {
                        data[i].expiration_date= temp;
                        temp ="";
                    }
                    std::cout << "To chang Supplier Name >> " << data[i].supplier_name <<" << Enter the New Item Supplier Name\n";
                    std::getline(std::cin,temp);
                    if(!temp.empty())
                    {
                        data[i].supplier_name = temp;
                        temp ="";
                    }
                    std::cout << "To chang Supplier Phone >> " << data[i].supplier_phone <<" << Enter the New Item Supplier Phone\n";
                    std::getline(std::cin,temp);
                    if(!temp.empty())
                    {
                        data[i].supplier_phone = temp;
                        temp ="";
                    }
                    std::cout << "To chang Item Count >> " << data[i].item_count <<" << Enter the New Item Count\n";
                    if(!(std::cin >>new_data.item_count))
                        {
                            std::cout << "you cant add char in count must be number\n";
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                            return;
                        }
                // data.erase(data.begin()+i); 
                // data.push_back(new_data);
                if(!data[i].item_name.empty())
                {
                system("clear");
                std::cout << "Item (" << data[i].item_name << ") edited successfully!\n";
                std::cout << "New Item detials is!\n";
                system("clear");
                std::cout << "=====================--------------------------------\n";
                print_entry_by_id(data[i].item_id_number);
                std::cout << "=====================--------------------------------\n";
                } 

                }
                else
                {
                    if(data.size() == i+1)
                    {
                        system("clear");
                        std::cout << "The ID not found or not right\n";
                    }
                }
            }


    }

    stuff::~stuff(){};
    showing_stuff::~showing_stuff(){};