# Threads

This repository contains a basic overview of how threads work (in particular C++ threads) with some simple examples and tasks.

## Overview

This README file briefly describes how threads work in general with some very simple C++ examples. In the `tutorials` directory are a series tasks with example answers in order to help the reader.

## Threads

### What are threads

I find the best way to answer this question is with a very basic example. Take a look at the very basic example below:

```
int main() {
    while(true) {
        std::cout << "Hello, World" << std::endl;
    }

    return 0;
}
```

As you can see, the goal of the above code is to simply print `Hello, World` to the screen as quickly as possible. If we were to run this script and take a look at our CPU usage, we'd see that one CPU is most likely running at 100%.