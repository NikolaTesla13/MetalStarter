# Metal Starter
This is a starter template for C++ projects that utilize the Metal API. It uses CMake as a build system, with all the dependencies caches locally in the `lib` folder. In development, CLion was used and it is recommended.

## How to use
Clone ths repo:
```shell
git clone https://github.com/nikolatesla13/metalstarter
```
Move into the directory:
```shell
cd MetalStarter
```
If you want to use an IDE like CLion, open the folder and you're done. If you want to use Makefiles or Xcode, follow these steps:
```shell
mkdir build
cd build
```
Here we created a `build` directory for the generated files needed at build time. Generate these files (you need to have CMake installed):
```shell
cmake ..
```
And now, open the project with Xcode or just build it straight from the command line:
```shell
make

# run our project!
./MetalStarter
```

This repository is meant as a starting point for your C++ & Metal project.

## License

This project is licensed under GPLv3 and was created by [Asandei Stefan-Alexandru](https://stefan-asandei.netlify.app).