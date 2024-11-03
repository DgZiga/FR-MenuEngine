# Menu Engine
Collection of utilities that simplify the creation of a custom menu.  

## How to insert
This tool requires:
- python (tested with 3.8.3)
- [grit](https://www.coranac.com/projects/grit/) 0.8.6+
- [devkitARM](https://devkitpro.org/wiki/devkitARM)

Once you have all the necessary software installed and ready to go, just navigate to the root of this project and copy/paste your ROM there. Rename the file to `BPRE0.gba`.  
Open the terminal, navigate to the root of the project, then run `python scripts/build.py 0xFFFFFFFF`, where `0xFFFFFFFF` is the free space in your ROM, and the script should insert everything, creating two new files:
- `multi.gba`: the updated ROM
- `symbols.txt`: a text file containing all the addresses known to the compiler. Conserve this file to know where everything in your ROM was inserted

## How to use

### Creating the menu
To create a menu one must create a `struct InterfaceDefinition`.  
This object will contain all the necessary information to display a menu.

Calling the `new_gui_main` function with a pointer to the `struct InterfaceDefinition` will open the menu.  
This project still requires extensive testing