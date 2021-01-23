// Copyright 2020 dima <dmitrymazhorinjr@gmail.com>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_
#include "boost/filesystem.hpp"
#include "vector"
#include "string"
#include "map"
#include "account.h"
#include "set"

class parserOfDir{
 private:
  std::vector<boost::filesystem::path> files;
  std::set<std::string> accountsStrings;
  std::vector<account> accounts;
 public:
  explicit parserOfDir(std::string pathForParse);
  void assembleFilesForAcc();
  std::string printFormatted();

};
#endif // INCLUDE_HEADER_HPP_