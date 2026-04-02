#include <cstdio>

int main(){
    /*
      ->We can create a reference to any variable
      ->Allows to borrow a variable to a different context
      ->Use & to state that a variable is a reference
        float & ref = original_variable;
      ->Reference is part of the typeL
        variable ref has type <OriginalType> &
      ->Changing a reference changes the variable and vice versa
    */

    int some_variable = 42;
    int& some_variable_ref = some_variable;
    some_variable_ref = 23;
    // some_variable is now == 23

    /*
    Yields performance gain as references avoid copying data
    */
    return 0;
}
