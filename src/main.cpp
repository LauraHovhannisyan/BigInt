#include <BigInt/BigInt.h>

#include <iostream>

using namespace ACA;
using namespace std;

int main()
{
    BigInt n;
    std::cin>>n;
	BigInt num1="22507";
    BigInt num2="234512003";
    BigInt num3="0";

    std::cout<<(num1>num2)<<std::endl;
    //std::cout<<(num1>num2)?num1:num2;
    std::cout<<num1;
    std::cout<<std::endl;
    std::cout<<num2;
    std::cout<<std::endl;

    std::cout<<(num2/num3)<<std::endl;
    std::cout<<(num2%num1)<<std::endl;
    //BigInt n;
    //std::cin>>n;
    //std::cout<<n<<std::endl;
    return 0;
}

