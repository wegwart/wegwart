#!/bin/bash

set -e
set -x

rm -rf build_release
mkdir build_release
pushd build_release

cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build .

popd

rm -rf build_debug
mkdir build_debug

pushd build_debug

cmake .. -DCMAKE_BUILD_TYPE=Debug
cmake --build .

popd