# Langage C++ 10

## La classe string

### Bibliothèque 
```c++
#include <string>

``` 

### Quelques fonctions utilitaires

```c++
size_t size()
string erase();
string substr( size_type index, size_type num = npos );
bool empty() const;
size_t length() const;
string &append(const string &str, size_t pos, size_t n);
string &insert(size_t pos1, const string &str, size_t pos2, size_t n);
```
