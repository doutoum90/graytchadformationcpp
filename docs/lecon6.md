# Langage C++ 6

##  premiere classe en C++

## Les classes

```c++
class  Personne
{
public:
}; 

``` 

## Les constructeurs

```c++
class  Personne
{
public:
	Personne();
};
Personne::Personne() {
	std::cout << "création de la personne"<< std::endl;
}
```

## Le destructeurs

```c++
class  Personne
{
public:
	~Personne();
}; 

Personne::~Personne()
{
std::cout << "destruction" << std::endl; 
}

``` 

## Les attributs

```c++
class  Personne
{
	public:
	/** les attributs***/
	int age;
	std::string nom;
};
```

## Les méthodes

```c++
class  Personne
{
public:

	/** les attributs***/
	...
	/** les attributs***/
	void  marcher();
}; 
  
void  Personne::marcher()
{
	std::cout << "Entrain de marcher" << std::endl;
}
```
