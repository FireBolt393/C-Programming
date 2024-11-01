# C Language Notes

This repository contains comprehensive C language notes divided into three files:
- **notes.c**: Covers the basics, including variables, data types, arrays, file handling, and more.
- **notes2.c**: Focuses on functions, function prototypes, typedefs, and advanced function usage.
- **pointers.c**: Dedicated to pointers, covering topics from pointer basics to complex use cases with pointers in functions, arrays, and structs.

**Note**: Each file contains table of contents for easy navigation and code examples for learning and experimentation. Only necessary code blocks should be uncommented at a time to avoid errors, especially due to reused variable names and multiple `main` functions in files.

---

## Usage Instructions

### `notes.c`
- **Commented Code Blocks**: All code blocks are initially commented out within the `main` function.
- **Testing Blocks**: To test a specific block:
  - Remove the `/*` at the beginning of the block and `*/` at the end.
  - Make sure other code blocks are commented to prevent conflicts, as similar variable names are used in multiple blocks.
  
### `notes2.c`
- **Multiple Main Functions**: The file has multiple `main` functions and related sub-functions organized in blocks.
- **Uncommenting Code Blocks**: Uncomment only the block you want to test, including its `main` function and any necessary sub-functions. 
- **Testing**: Ensure only one `main` function block is uncommented at a time to avoid redefinition errors.

### `pointers.c`
- **Pointer-Focused Code**: Contains multiple blocks with `main` functions dedicated to pointers.
- **Selective Testing**: Like `notes2.c`, uncomment only the specific `main` function and relevant code block you want to test.
- **Pointer Examples**: Includes complex pointer usage with arrays, strings, and structs. Each example is self-contained within a block.

---

## Running the Files

1. **Open a Terminal** in the directory containing the files.
2. **Compile** the desired file:
   ```bash
   gcc notes.c -o notes
   gcc notes2.c -o notes2
   gcc pointers.c -o pointers

   ./notes    # for notes.c
   ./notes2   # for notes2.c
   ./pointers # for pointers.c
   ```
## Notes
**Error Handling:** If you encounter errors, verify that only one main function block is uncommented per file.
**Modularity:** The files are structured to allow independent testing of concepts. This approach prevents naming conflicts and enables focused testing on specific topics.
**Code Blocks:** All blocks are enclosed in comments (/* ... */). To test a block, simply remove the comments surrounding the specific block you wish to run.

Happy coding and exploring the depths of C programming!
