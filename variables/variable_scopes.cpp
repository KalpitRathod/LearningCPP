#include <cstdio>

constexpr auto kGlobalVariable{42};

int main(){ //start of main scope
  float some_float = 13.13f; //create variable
  { //new inner scope
    auto some_float = 42.42F; //"Shadows" some float
    auto another_float = some_float; // Copy variable
  } // another_float and the shadow of soe_float die
    return 0;
} // Variable some_float dies
//kGlobalVariable dies at the end of the program
