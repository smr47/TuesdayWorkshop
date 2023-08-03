# Single File C & C++ Build Environments

It's easy to write and build single-file C and C++ programs which allow you
to do simple or complex expriments with these languages.

A single-file program contains a main() function and any other code that you want to test.

You can also include files accessing any libraries that are installed at the system level
on the machine you're using and use those resources in your single-line program.

## crib.txt

The file, crib.txt, contains samples of useful commands.

## mk

The file, mk, is a script that compiles and links each *.c or *.cpp file in the current directory.

## t*.c and t*.cpp

The files, t*.c and t*.cpp, are examples of simple source files that can be used to build programs. These all use viz.h to make their
actions visible.

## viz.h

The file, viz.h contains macros supporting detailed logging.

Source files that use these macros easily generate an organized log of their execution progress with little impact on the readability of the
source.
