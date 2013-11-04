#include "gtest/gtest.h"
#include "commandline.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  Commandline c;
  c.ProcessRequest(argc, argv);
  return RUN_ALL_TESTS();
}
