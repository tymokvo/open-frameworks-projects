# open-frameworks-projects

# Usage
```
cp -r ./emptyExample name_of_new_project
```

You may want to rename the `emptyExample.qbs` file, if you are using Qt.

# Requirements
Developed on windows with a working [MSYS2](http://www.msys2.org/) installation.

Assumes a working [openFrameworks](https://openframeworks.cc/) installation.

[This](./emptyExample/config.make) file should have the `OF_ROOT` variable set to point to the root of the openFrameworks installation.

It should work on any *nix platform, but I am using `mingw64` and the corresponding version of oF.