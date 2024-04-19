#include <iostream>
#include <set>
#include <map>

template<typename T>
void showSet(const std::set<T>& abc);

template<typename T>
void showMap(const std::map<int, T>& abc);


int main()
{
	std::set<int> mySet = { 1,3,4};
	showSet(mySet);
	std::cout << std::endl;
	auto it = mySet.find(3);
	mySet.erase(it);
	mySet.insert(2);
	showSet(mySet);
	std::cout << std::endl;

	std::map<int, std::string> myMap;
	std::map<int, std::string> newMap;
	myMap[1] = "Kota";
	myMap[2] = "Pesa";
	myMap[4] = "Koza";
	myMap[3] = "Cow";
	showMap(myMap);
	newMap[21] = "Lincolkn";
	newMap[2] = "Mercedes";
	newMap[-1] = "bmw";
	showMap(newMap);
	myMap.swap(newMap);
	showMap(myMap);
}

template<typename T>
void showSet(const std::set<T>& abc) {
	for (auto it = abc.begin(); it != abc.end(); ++it)
	{
		std::cout << *it;
	}
}

template<typename T>
void showMap(const std::map<int, T>& abc) {
	for (auto it = abc.begin(); it != abc.end(); ++it)
	{
		std::cout << it->first << ": " << it->second << " ";
	}
	std::cout << std::endl;
}