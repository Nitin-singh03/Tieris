#include "storage_engine.h"

void StorageEngine::set(
    const std::string& key,
    const std::string& value
) {
    data[key] = value;
}

bool StorageEngine::get(
    const std::string& key,
    std::string& value
) {
    auto it = data.find(key);

    if (it == data.end()) {
        return false;
    }

    value = it->second;

    return true;
}

bool StorageEngine::del(
    const std::string& key
) {
    return data.erase(key) > 0;
}