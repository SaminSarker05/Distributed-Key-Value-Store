
#include "kv_store.h"

namespace mango {

void KeyValStore::put(std::string key, std::string val) {
	store[key] = val;
}

std::string KeyValStore::get(std::string key) {
	auto it = store.find(key);
	if (it != store.end()) {
		return it->second;
	}
}

bool KeyValStore::del(std::string key) {
	auto it = store.find(key);
	if (it == store.end())
		return false;

	store.erase(it);
	return true;
}

}
