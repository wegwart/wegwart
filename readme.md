# Wegwart Example

C++ example using cmake and conan

# Install virtual environment and requirements once
python3 -m venv .venv && source .venv/bin/activate && pip install -r requirements.txt

# Activate virtual environment and run script to configure cmake and build
source .venv/bin/activate && ./build.sh

# Build 
cd build \
cmake --build . -j4 \
or 
make

