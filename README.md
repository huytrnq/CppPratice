<h1>C++</h1>

# Table of Contents
1. [Object Oriented Programming](#obb)

## Object Oriented Programming
### Outside class definition
- Purpose: To define the member functions outside the class definition when the class is defined in a header file.
- Syntax:
    ```cpp
    class ClassName
    {
        public:
            void FunctionName();
    };
    void ClassName::FunctionName()
    {
        // Function definition
    }
    ```
- Include guard: To prevent the header file from being included more than once in the same file.


# Static vs Dynamic Libraries
- Static libraries are linked to the executable at compile time.
- Dynamic libraries are linked to the executable at run time.
- Dynamic libraries are loaded into memory when the program starts and are shared among all the processes that use the library. May have worse performance than static libraries.