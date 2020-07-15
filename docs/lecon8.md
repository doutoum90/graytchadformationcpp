# Langage C++ 8

##  les fonctions lambda et les namespaces

### fonctions lambdas

```c++
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

### les passages de paramètres

>1 passage par valeur (copie)
```c ++ 
void inverser(int a, int b){
	int temp = a;
	a=b;
	b=temp;
}
```

> 2 passage par adresse

```c ++ 
void inverser(int * a, int * b){

	int temp = *a;
	*a=*b;
	*b=temp;

}

``` 

>3 passage par reference
```c ++ 
void inverser(int & a, int & b){
	int temp = a;
	a=b;
	b=temp;
}
```

### Les namespaces

namespaces nom; 

```c++
namespace nom1
{ 

    void fonction()
    { 
	    cout << "fonction depuis nom1" << endl;
    } 

} 
namespace nom2
{ 

    void fonction()
    { 
	    cout << "fonction depuis nom2" << endl;
    } 

} 
nom1::fonction(); // fonction depuis nom1
nom2::fonction(); // fonction depuis nom2

```
