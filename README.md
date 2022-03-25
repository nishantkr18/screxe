# Build instructions:

1. Clone the repository.
2. Navigate into the repository using `cd screxe`
3. Make a directory called build. Navigate into it. `mkdir build && cd build`
4. Run `cmake ../.`
5. Finally run `make`.

Once the executables are ready, you can simply run them using `./write_to_file` and `./read_from_file`.

# Sample input and output:
On running the executable as `./write_to_file` , we are asked to enter the name, value and flag. 
Suppose we enter the following:
```
nishant 
4.5
1
```

Upon proceeding, the program ends with the following output:
```
Size of buffer:44
```

This basically denotes that the size of the file created is 36 bytes.

After that, when we run the `./read_from_file` executable, we get the following result:

```
Name: nishant
Value: 4.5
Flag: 1
```