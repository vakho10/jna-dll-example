# JNA DLL Example
This is an example project showing how to use your C++ DLL from Java code using JNA.

## Projects
* sleep-dll - is a dummy VS C++ application which exposes super dummy methods in Native C DLL. You can read more about the native approach here: [HowTo: Export C++ classes from a DLL - CodeProject](https://www.codeproject.com/articles/28969/howto-export-c-classes-from-a-dll)
* java-consumer - is a dummy Java application which consumes the DLL's functions by wrapping them in Java class using JNA.

## How to run the example
To run the examples, firstly, you'll have to build the VS project, take the DLL file from the `bin/` output directory and put it in `java-dll-consumer` project's root directory. 
Lastly, open the Java project `java-dll-consumer` and run the Main class file. 