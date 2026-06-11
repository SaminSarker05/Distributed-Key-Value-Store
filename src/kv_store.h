#ifndef SRC_KV_STORE_H
#define SRC_KV_STORE_H

#include <string>
#include <unordered_map>

namespace mango {

class KeyValStore {
 public:
	// Insert a key val pair.
	void put(std::string key, std::string val);

	// Get value for a given key.
	std::string get(std::string key);

	// Delete a key value pair.
	bool del(std::string key);

 private:
	std::unordered_map<std::string, std::string> store;
};

}  // namespace mango

#endif
