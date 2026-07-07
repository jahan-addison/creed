#include <doctest/doctest.h> // for filloss, ResultBuilder, toStream, toSt...

#include <creed/hello.h> // for Greeter
#include <string>        // for basic_string
#include <string_view>   // for basic_string_view

TEST_CASE("hello.cc: Greeter::greet")
{
    auto test = creed::Greeter{};
    CHECK_EQ(test.greet("Bob"), "Hello, Bob!");
    CHECK_EQ(test.greet("Sarah"), "Howdy, Sarah!");
    CHECK_EQ(test.greet("John"), "Hi, John!");
}