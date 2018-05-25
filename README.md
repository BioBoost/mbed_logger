# Simple Logger for mBed

This library contains a simple but versatile logger. Add you own formatter or easily quit logging by exchanging the terminal logger with a null logger. The Logger is also equipped with a log level so you can choose to only log from a certain severity level.

Check out the examples to see how to use the library.

## Requirements

You will need to enable C++11 compilation. This can be achieved by changing the three json configurations files in `code/mbed-os/tools/profiles`. Change the `cxx` section of the `GCC_ARM` config to the following:

```json
        "cxx": ["-std=gnu++11", "-fno-rtti", "-Wvla"],
```