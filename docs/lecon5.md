# Langage C++ 5

##  Les pointeurs et allocation dynamique

[documentation C++](https://www.loom.com/share/7968dc03a9b448fc8010c2cc0847f257)
```c++
int a {5}; 
int *nombre{nullptr}; 
nombre= &a; 

// ou 
int *nb2{new int(16)}; 
int *nb3{new int[50]}; 

delete nb2; 
delete[] nb3; 

``` 
***évitement du fuite memoire avec des pointeurs intelligents***

```c++
// defini dans la bibliotheque memory
#include <memory>
// uniques
std::unique_ptr<int> pt_intelligent1{std::make_unique<int>(54)};
// partagés
std::shared_ptr<int> pt_intelligent2{std::make_shared<int>(54)};

// weak_ptr
std::weak_ptr<int> pt_intelligent3{};
```
