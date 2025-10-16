#include<iostream>

int a;
int b;

int main(){
    std::cout<<"Zahl a: ";
    std::cin >> a;
    std::cout<<"Zahl b: ";
    std::cin >> b;

    while (a!=b){
        if (a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    std::cout<<"der ggT ist: ";
    std::cout<<a <<"\n";
    return 0;
}