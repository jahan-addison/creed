#include <creed/hello.h> // for Greeter
#include <fmt/base.h>    // for println

int main()
{
    auto greeter = creed::Greeter{};
    fmt::println("Greet: {}", greeter.greet("John"));
}