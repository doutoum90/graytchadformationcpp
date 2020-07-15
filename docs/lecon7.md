# Langage C++ 7

##  La surcharge, l'encapsulation, Les accesseurs et modifieurs

### La surcharge

### l'encapsulation

### Les accesseurs et modifieurs

### Les fonctions lambda ou fonctions callback

``` 
/*[zone de capture]
(paramètres de la lambda) 
-> 
type de retour { instructions }
*/
[]() -> void {};
[]{};
[]
(std::string  const & message) -> void { std::cout << "Message reçu : " << message << std::endl; };
auto lambda_avec_accolades { [](int nombre) -> void { std::cout << "Nombre reçu : " << nombre << std::endl; } };
```
