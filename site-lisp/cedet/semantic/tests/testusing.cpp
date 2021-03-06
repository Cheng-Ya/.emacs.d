// Test using statements in C++

#include <adstdio.h>

#include <testusing.hh>

namespace moose {
  
  class MyClass;
  class Point;

  typedef MyClass snerk;
}

namespace moose {

  class Point;
  class MyClass;

}

namespace {
  
  int global_variable = 0;

};

using moose::MyClass;

void someFcn() {

  MyClass f;

  f.//-1-
    ; //#1# ( "getVal" "setVal" )

}

// Code from Zhiqiu Kong

namespace panda {

  using namespace bread_name;

  int func()
  {
    bread test;
    test.//-2-
      ;// #2# ( "geta" )
    return 0;
  }
}

// Local using statements
// Code from David Engster

void func2()
{
  using namespace somestuff;
  OneClass f;
  f.//-3-
    ; //#3# ( "aFunc" "anInt" )
}

void func3()
{
  using somestuff::OneClass;
  OneClass f;
  f.//-4-
    ; //#4# ( "aFunc" "anInt" )
}
