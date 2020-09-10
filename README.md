# kenlm-cpp-example
Basic setup to use kenlm library in cpp

### Setup kenlm
```
git clone https://github.com/kpu/kenlm.git
cd kenlm
mkdir -p build
cd build
cmake ..
make -j 4
```
If you get any compilations errors, then please check if you have all the dependencies installed [link](https://kheafield.com/code/kenlm/dependencies/)

### Run example
Copy `example.cpp` to the parent directory of `kenlm` clone <br>
You need to configure the path for your kenlm `.binary` or `.arpa` in `example.cpp`. Read the 'estimation' section of the readme [here](https://github.com/kpu/kenlm) for instructions to create a kenlm binary.<br>
```
g++ example.cpp -DKENLM_MAX_ORDER=6 -Ikenlm -Lkenlm/build/lib -lkenlm -lkenlm_util -lz -llzma -lbz2 -o example
./example
```
