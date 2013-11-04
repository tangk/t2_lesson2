#include <iostream>
#include "../include/commandline.hpp"

int main(int argc, char **argv) {
  Commandline c;
  c.ProcessRequest(argc, argv);
}
