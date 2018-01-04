#include <iostream>
 
int main()
{
    setlocale(LC_ALL, "Russian");
    float X, Y;
    std::cout<<"Введите X:\n> ", std::cin>>X;
    std::cout<<"ВВедите Y:\n> ", std::cin>>Y;
    std::cout<<"Результат:\n< "<<((X+Y)/(Y+1)-(X*Y-12)/(34+X))<<'\n';
    system("pause");
    return 0;
}