/*
->Using lifts a variable from its scope into the current scope
->Can be used from any scope

unnamed namespaces
-> They are sometimes also called "anonymous" namespaces
-> This generates a namespace with a unique name available only in this "translation unit" (aka source file)
-> Also has "linkage" implications
-> Only use them in .cpp .cc files, never in .h, .hpp etc.

eg.
namespace {
constexpr auto kConstant{42};
} // namespace

*/
#include <cstdio>

namespace cpp_course {
constexpr auto kNumber{42};
constexpr auto kAnotherNumber{24};
} // namespace cpp_course


int main(){
    using cpp_course::kAnotherNumber;
    //Now kAnotherNumber is availabe in this scope!

    constexpr auto number(cpp_course::kNumber);
    constexpr auto a_number(kAnotherNumber);
    return 0;
}