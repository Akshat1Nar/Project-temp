export PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/usr/lib/x86_64-linux-gnu
rm -rf build
mkdir build && cd build
cmake ..
make
./video-app
cd ..
