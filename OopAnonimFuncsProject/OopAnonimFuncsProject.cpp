#include <iostream>
#include <typeinfo>

int Sum(int a, int b)
{
    return a + b;
}

int Mult(int a, int b)
{
    return a * b;
}

int Calc(int a, int b, int(*operation)(int, int))
{
    return operation(a, b);
}


int main()
{
    int (*oper)(int, int);
    //oper = Sum;
    std::cout << Calc(10, 20, Sum) << "\n";
    
    //oper = Mult;
    std::cout << Calc(10, 20, Mult) << "\n";
    
    
    //oper = ;

    std::cout << Calc(10, 20, 
        [](int a, int b)->int
        {
            return a - b;
        }) << "\n";
    //std::cout << typeid(oper).name() << "\n";


    int number{ 20 };
    int n1{ 5 };

    auto f1 = [&](int a, int b)
        {
            number = 20;
            n1 = 30;
            return a + b + number + n1;
        };
}
