#include "fibonacci_naive.h"
#include <decimal.h>
#include <elapse.h>


int input(){
    int seriesNum;
    std::cout << "Please input your series num:";
    std::cin >> seriesNum;
    return seriesNum;
}

void func(){
    FibonacciNaive<Decimal> fibonacci;
    int seriesNum = input();
    fibonacci.generate(seriesNum);
}

int fibonacci_main(){
    elapse_time(func);
    return 0;
}