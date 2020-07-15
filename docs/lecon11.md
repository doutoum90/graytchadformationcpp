# Langage C++ 11

## Les collections : les SD List et Vector

### Les collections

a - Séquences

*   [ `vector` ](https://fr.cppreference.com/w/cpp/container/vector)
*  [ `deque` ](https://fr.cppreference.com/w/cpp/container/deque)
*   [ `list` ](https://fr.cppreference.com/w/cpp/container/list)
*   [ `stack` ](https://fr.cppreference.com/w/cpp/container/stack)
*   [ `queue` ](https://fr.cppreference.com/w/cpp/container/queue)
*  [ `priority_queue` ](https://fr.cppreference.com/w/cpp/container/priority_queue)

b- Conteneurs associatifs

*   [ `set` ](https://fr.cppreference.com/w/cpp/container/set)
*   [ `multiset` ](https://fr.cppreference.com/w/cpp/container/multiset)
*   [ `map` ](https://fr.cppreference.com/w/cpp/container/map)
*   [ `multimap` ](https://fr.cppreference.com/w/cpp/container/multimap)

### List

```c++
#include <list>
#include <iterator>
...
list<int> tableauEntiers; 

``` 

* `reverse()`
* `push_front()`
* `pop_front()`
* `sort()`
* push_back()
* pop_back()
* begin()
* end()
* capacity()
* size()
* max_size()
* empty()
* assign()
* insert()

### vector

```c++
#include <vector>
...
Vector<int> tableauEntiers;
tableauEntiers.push_back(1);
tableauEntiers.size();
```

* push_back()
* pop_back()
* begin()
* end()
* capacity()
* size()
* max_size()
* empty()
* assign()
* insert()
