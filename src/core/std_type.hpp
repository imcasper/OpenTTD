#pragma once
#ifndef STD_TYPE_H
#define STD_TYPE_H

#include <vector>
#include <map>

template <class Key, class Value>
using Map = std::map<Key, Value>;

template <class Value>
using Vector = std::vector<Value>;

template <class K, class V>
V GetOrDefault(Map<K, V> &map, K &key, V &defval) {
	auto it = map.find(key);
	if (it == map.end()) {
		return defval;
	}
	return it->second;
}

#endif // STD_TYPE_H
