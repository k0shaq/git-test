#include <iostream>
#include <set>

template<typename T>
void showSet(const std::set<T>& abc);

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
	std::cout << mySet.size();
}

template<typename T>
void showSet(const std::set<T>& abc) {
	for (auto it = abc.begin(); it != abc.end(); ++it)
	{
		std::cout << *it;
	}
}