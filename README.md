IBM Developer Day 2018 Badge firmware

# Build

## Linux - Ubuntu 18.04

### Install toolchain
* https://docs.espressif.com/projects/esp-idf/en/stable/get-started/#setup-toolchain

### Build firmware
```shell
git submodule update --init

# Build esp-idf components
make defconfig
make

# Build Micropython firmware
cd micropython
git submodule update --init lib/berkeley-db-1.xx
make -j5 -C mpy-cross
make -j5 -C ports/esp32
ls -l ports/esp32/build/firmware.bin
```
