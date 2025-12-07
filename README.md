## UNIT CONVERTER PROJECT REPORT
Project Description
This project is a C-based Unit Converter that performs Length, Temperature, Weight, and Time
conversions. It includes an in-memory conversion history, a menu-driven interface, and additional
utilities such as viewing and clearing history.
# Getting Started
1. Install a C compiler such as GCC.
2. Save the code as unit_converter.c.
3. Open a terminal in the directory containing the file.
## Repository Structure

```
/
|-- src/               (contains all .c source files)
|-- include/           (header files, if any)
|-- docs/              (project report, flowcharts, diagrams)
|-- assets/            (screenshots, visuals, optional assets)
|-- README.md          (this file)
|-- sample_input.txt   (optional test input data)
```

---
# To Compile:
gcc unit_converter.c -o converter
To Run:
./converter
# Step-by-Step Build Instructions
1. Define a structure to store conversion history.
2. Implement individual conversion modules for different unit types.
3. Add history management functions.
4. Build a main menu loop for user selection.
5. Compile and test each module.
## Usage-  
Choose a converter type from the menu.
- Enter the value to convert.
- The program displays the result and stores it in history.
- View or clear history anytime.
- Exit when done
