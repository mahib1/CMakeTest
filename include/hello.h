#pragma once
#include <iostream>

void helloo(int argc, char *argv[]) {
  for (int i = 0; i < argc; i++) {
    std::cout << argv[i] << " ";
  }

  return;
}
