# Libft
My personnal lib. At first, this used to contain every mendatory functions for the `libft` 42 project.  
Then, i started to extend it more and more, adding functions when i needed it or simply by curiosity or for personnal learning purpose.

This lib is divided into several "submodules" to simplify it developpment.
The makefiles allow a great and easy expansion trough quick new submodule addition.

## Modules :
- ### ftio

   This module contains all the I/O functions like `ft_printf` or `ft_readline`.
- ### ftlib  
   Contains the string processing and memory managment functions.
- ### ftmath  
   Multiple math functions, already in the standard libmath, but have the advantage to be instructive and allowed by 42, whatever the project.
- ### ftregex  
   _(WIP)_ Trying to implement my own regular expression engine.
- ### ftcipher  
   Cryptographic module. _(Only contains a single ciphering/deciphering homemade function for now)_

## Compilation :
The only Makefile you'll have to run is the default one `Makefile` at repository root.  
Without any argument, it should compile a statical version `libft.a` of the library.
A shared version `libft.so` can be compiled trough the `make libft.so` or `make so` command

![](.compilation.gif)

## Dependancies :
To compile the lib, the makefile need those commands to be available.  
`rm` `cp` `ln` `ar` `gcc` `tr` `sed` `awk` `cut` `sort` `echo` `mkdir` `which` `printf` `ranlib` et `sh`.  

if one of the `rm` `cp` `ln` `ar` `mkdir` or `gcc` commands is unavailable, the makefile won't be able to compile at all and throw an error.

However, you can change their default values trough the `variables.mk` file at the repository root, or by defining the associated variables (`RM` `CP` `LN` `CC` `AR` and `MKDIR`) trough the command line :  
`make CC=clang AR='libtool -static -o'`
```
The default values for those variables are:
  RM    = rm -rf
  CP    = cp -rf
  LN    = ln -s
  AR    = ar -rc
  CC    = gcc
  MKDIR = mkdir -p
```

All the other commands aren't used to compile the library, but are mendatory to enable the makefile's `fancy mode`, which is the custom output for compilation process (showed in the upper gif).
So if one of those commands is missing, the fancy mode is automatically disabeled.

Note that you can force disable the fancy mode by passing `FANCY_MODE=FALSE` to the command line:  
`make FANCY_MODE=FALSE`

I'm trying my best not to rely on other libs, but for now, the libft still depends on any other C standard library like the glibc.  
However, i try as much as i can to stick to C89 (ansi) and not to use any extension (pedantic).  
Actually, the only exceptions to this are the `ft_printf` function and it's variants (mostly because of the `long long`) and a tiny part of `ftmath`....

## Norm :
Of course, the whole library sources are 42 norm valid (version 2.0.2)
