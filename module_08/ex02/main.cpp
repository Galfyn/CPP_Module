#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(10);
    mstack.push(30);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(13);
    mstack.push(50);
    mstack.push(77);
    mstack.push(1000);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    int i = 0;
    while (it != ite)
    {
        std::cout << "stack[" << i << "]: " << *it << std::endl;
        ++it;
        i++;
    }
    std::cout << mstack.top() << std::endl;
	return 0;
}