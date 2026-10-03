#include <iostream>
#include <string>

#include "storage_engine.h"

int main() {
    StorageEngine engine;

    engine.set("name", "Nitin");
    engine.set("age", "21");

    std::string value;

    if (engine.get("name", value)) {
        std::cout << "name = " << value << '\n';
    }

    if (engine.get("age", value)) {
        std::cout << "age = " << value << '\n';
    }

    engine.del("name");

    if (!engine.get("name", value)) {
        std::cout << "name = NOT_FOUND\n";
    }

    return 0;
}