#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
#include <exception>
#include <math.h>
#include "Stack.h"

using namespace std;

TEST_CASE("Move Constructor") {
  // This is the setup.  The init here is run before each test.
  // Conceptually, this code is glued into the start of each SECTION
  Stack stack1{};
  stack1.push(-5);
  stack1.push(3);
  Stack stack2{std::move(stack1)};

  SECTION("moved from stack has null \"values\" variable") {
    REQUIRE(stack1.getValues() == nullptr);
  }

}

TEST_CASE("Push and pop") {
  Stack stack1{};
  Stack stack2{};

  SECTION("initial push() works correctly") {
    stack1.push(-5);
    REQUIRE(stack1.pop() == -5);
  }

  SECTION("pop() off empty stack causes thrown exception") {
    REQUIRE_THROWS(stack2.pop());
  }

  SECTION("stack resizes without error") {
    for (int i = 0; i < 100; ++i) {
      stack1.push(i);
    }
    REQUIRE(stack1.pop() == 99);
  }
}

TEST_CASE("Working with a float or double") {
  double foo = sqrt(2.0);
  double bar = sqrt(3.0);
  double prod = sqrt(6.0);
 
  SECTION("multiplication by inverse gives multiplicative identity") {
    //REQUIRE((foo * bar) == prod);
    REQUIRE((foo * bar) == Approx(prod));
  }
}
