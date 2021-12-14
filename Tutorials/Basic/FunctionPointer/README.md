# Tutorial -> FunctionPointer

This tutorial will focus on what we are actually passing into the `std::thread` parameters. As the name suggestions, when we create a basic thread, we are passing in a pointer to a function. This tutorial will not go into great depth as to what function pointers are but I strongly suggest you take a look at the following tutorials:
  - [TheCherno](https://www.youtube.com/watch?v=p4sDgQ-jao4&ab_channel=TheCherno)
  - [NesoAcademy](https://www.youtube.com/watch?v=wQ-gWwKKeP4&ab_channel=NesoAcademy)

## Examples

As always, let's take a look at a very simple example:

```c++
void print() {
    std::cout << "Hello, World" << std::endl;
}

int main() {
    std::thread t1(print);

    t1.join();

    return 0;
}
```

For this tutorial we're going to focus mainly on this line of code:

 ```c++ 
 std::thread t1(print);
 ```

When we create a thread we have many options as to what we pass in as parameters but for this tutorial, we're going to focus on functions. Something you may have noticed is how we pass in `print` and not `print()`. This is because we want to pass a pointer to the function and not call the function. We could write the following line of code but I believe this may be more confusing than helpful.

```c++
void print() {
    std::cout << "Hello, World" << std::endl;
}

int main() {
    void(*printPointer)() = print;
    std::thread t1(printPointer);

    t1.join();

    return 0;
}
```
[Note: Above example can be found in `src` directory or by clicking [here](src/functionPointer.cpp)]

In the above line of code, we are explicitly creating a pointer to a function (as opposed to asking the compiler to do so for us).

## Function parameters

Okay, so we understand for basic threads that we want to pass in pointer to the function. But what if the function we want to pass takes parameters? Well lucky for us, `std::thread` can also take the parameters needed for the function. Let's take a look at an example:

```c++
void printName(std::string name) {
    std::cout << "Hello, " << name << std::endl;
}

int main() {
    std::thread t1(printName, "John");

    t1.join();

    return 0;
}
```
[Note: Above example can be found in `src` directory or by clicking [here](src/functionParameters.cpp)]

As you can see, when we create the thread, not only do we pass the function pointer but we also pass in that functions parameter values. Easy right?

