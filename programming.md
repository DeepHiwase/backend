Programming Language

- computer language used by devs to communicate with computer
- a set of instructions written in a specific language
  - c++
  - go
  - c
  - c#
  - java
  - javascript
  - typescript
  - ruby
  - rust
  - python
  - zig

compilation - convert a language to computer understandable lang

- turning src code into executable code
- steps - src code -> Preporcessing -> compilation (compiler) -> assembly (assembler -> produce binary file) -> obj file -> linking (linker) -> exe file
- compiler - tool

- preprocessir -> handles directives like `#include` and `#define`
- linker -> combines multiple obj files into single exec

c++ - v11 - c++11

- high level
- general purpose
- created by Danish comp scientist Bjarne Stroustrup
- need
  - OOP
  - control over system resources and memory
  - performance: efficiency and speed
- uses
  - system / software development
  - game development
  - real time systems

- ex
  - adobe applications - as rendering tools - also in web browsers like chrome as for rendering engine
  - components of Windows OS

- low-level language
- high-level language

install c++ -> sudo apt install gcc
gcc is compiler
$ gcc -v
gcc version 13.3.0

ide extension

- c/c++ by microsoft
- code runner

setting up tasks in vscode

- .vscode/tasks.json

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "build",
      "type": "shell",
      "command": "g++",
      "args": ["-g", "main.cpp", "-o", "main"],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": "$msCompile"
    }
  ]
}
```
