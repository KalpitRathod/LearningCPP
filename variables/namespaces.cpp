/*
Namespaces
-> Variables (and other stuff) can live in namespaces
-> Namespaces are defined with the keyword namespace:
namespace cpp_course {
// Variables, functions etc.
} //namespace cpp_course

Namespaces can live within other namespaces:
namespace foo {
namespace bar {
// Variables, functions etc.
} // namespace bar
} // namespace foo

-> End with comment: // namespace <name>
(clang_format will take care of this)
->Name them like variables in snake_case
->Do not indent the code inside the namespace

Namespaces have special scopes
-> Variables in namespaces don't die at the end of their namespace scope
-> They still die with the global scope
-> Namespaces allow to "partition" the global scope
-> This avoids clashes between variable names
*/
#include <cstdio>

namespace foo {
constexpr auto kConstant{42};
} // namespace foo
namespace bar {
constexpr auto kConstant{23};
} // namespace bar


int main(){
    std::printf("%d\n", foo::kConstant);
    std::printf("%d\n", bar::kConstant);
    return 0;
}