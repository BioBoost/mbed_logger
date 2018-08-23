#include "mbed.h"
#include "simple_logger.h"

Serial pc(USBTX, USBRX); // tx, rx

#define ENABLE_SIMPLE_LOGGER
 
int main() {
    pc.baud(115200);

    Log.register_writer(new SimpleLogger::TerminalLogWriter());

    while (true) {
        // Not prefixing with Log. will enable conditional logging (only when macro ENABLE_SIMPLE_LOGGER is set)
        error("Its happening! Skynet has awoken.");
        info("Never mind, it was a pokemon.");
        wait_ms(1000);
    }
}