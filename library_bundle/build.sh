mkdir build
cd build
rm -rf *
rm -rf .*
cmake -S ../sources/Engine -B Engine/ -GNinja
cd Engine
ninja -j5 all
cd ..
cmake -S ../sources/Executable -B Executable/ -GNinja
cd Executable
ninja -j5 all
cd ..
