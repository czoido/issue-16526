#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define BYE_EXPORT __declspec(dllexport)
#else
  #define BYE_EXPORT
#endif

BYE_EXPORT void bye();
BYE_EXPORT void bye_print_vector(const std::vector<std::string> &strings);
