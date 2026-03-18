#include <iostream>
#include <vector>

class DoD{

public:
int a;
int b;
DoD(int first = 0, int second = 0) : a(first), b(second){};
    ~DoD() = default;
};


int main()
{

std::vector<DoD> vec;
vec.push_back(DoD(1,2));
vec.push_back(DoD(3,4));
std::cout << "Size of DoD object: " << sizeof(DoD) << std::endl;
std::cout << "Size of vector holding DoD objects: " << sizeof(vec) << std::endl;
std::cout<< "Number of DoD objects in vector: " << vec.size() << std::endl;
std::cout << vec[0].a << " " << vec[0].b << std::endl;
std::cout << vec[1].a << " " << vec[1].b << std::endl;

std::cout << std::endl;

DoD d[2];
 d[0].a= 5;
 d[0].b =6;
 d[1]={7,8};

 std::cout << d[0].a << " " << d[0].b << std::endl;
 std::cout << d[1].a << " " << d[1].b << std::endl;

std::cout << std::endl;
 
 DoD* pd = new DoD[2];

    pd[0]={1,2};
    pd[1]={3,4};


    DoD* it = pd;
    for(int i=0; i<2; ++i, ++it){
        std::cout << it->a << " " << it->b << std::endl;
    }
std::cout << std::endl;

for(int i=0; i<2; i++){
    std::cout << pd[i].a << " " << pd[i].b << std::endl;
}

    return 0;
}