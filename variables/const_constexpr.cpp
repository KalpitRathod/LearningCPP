#include <cstdio>

int main(){
    /*
    const
        ->Can be used for constant created at run time
        ->Can be initialized with any provided value
        ->Sometimes will be available at compile time
    */
   /*
   int a = 42;
   const int b = a; //0
   const int c = 23; //0
   const int d = c; //0
   const int e = c; //0
    */

    /*
    constexpr
        ->Can be used for constant created at compile time
        ->Can only be initialized from a constexpr value
    */
    int a = 42;
    const int a_const = 42;
    // constexpr int b = a; //1
    // constexpr int c = a_const; //1
    constexpr int d = 23; //0
    constexpr int e = d; //0
    constexpr int f = d; //0

    return 0;
}