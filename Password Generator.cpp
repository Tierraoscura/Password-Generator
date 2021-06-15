#include<iostream>
#include<cstdlib>
#include<ctime>

const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

int string_length = sizeof(alphanum)-1;

int main() {

    int n;
    std::cout << "Enter the length of password:";
    std::cin >> n;
    srand(time(0));
    std::cout << "Generated password:";
    for(int i = 0; i < n; i++)
        std::cout << alphanum[rand() % string_length];
    return 0;

}
