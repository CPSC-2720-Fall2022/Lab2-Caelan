# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/caelan/Documents/GitHub/Lab2-Caelan/cmake-build-debug-coverage/_deps/catch2-src"
  "/Users/caelan/Documents/GitHub/Lab2-Caelan/cmake-build-debug-coverage/_deps/catch2-build"
  "/Users/caelan/Documents/GitHub/Lab2-Caelan/cmake-build-debug-coverage/_deps/catch2-subbuild/catch2-populate-prefix"
  "/Users/caelan/Documents/GitHub/Lab2-Caelan/cmake-build-debug-coverage/_deps/catch2-subbuild/catch2-populate-prefix/tmp"
  "/Users/caelan/Documents/GitHub/Lab2-Caelan/cmake-build-debug-coverage/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
  "/Users/caelan/Documents/GitHub/Lab2-Caelan/cmake-build-debug-coverage/_deps/catch2-subbuild/catch2-populate-prefix/src"
  "/Users/caelan/Documents/GitHub/Lab2-Caelan/cmake-build-debug-coverage/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/caelan/Documents/GitHub/Lab2-Caelan/cmake-build-debug-coverage/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp/${subDir}")
endforeach()
