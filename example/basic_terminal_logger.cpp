#include "mbed.h"
#include "simple_logger.h"

Serial pc(USBTX, USBRX); // tx, rx
 
int main() {
    pc.baud(115200);

    Log.register_writer(new SimpleLogger::TerminalLogWriter());

    while (true) {
        Log.error("Its happening! Skynet has awoken.");
        Log.info("Never mind, it was a pokemon.");
        wait_ms(1000);
    }
}