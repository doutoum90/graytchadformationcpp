# Langage C++ 12

## Surcharge des opérateurs et génericité

### Surcharge des opérateurs

```c++
ostream & operator<<(ostream & os, const Relationnal & r2){

	return os << r2.num << "----" << r2.denum<<endl;

}
Relationnal operator+(const Relationnal & r2){

	r2.num+=this.num;
	r2.denum+=this.denum;
	return r2;

}

``` 

### Génericité

sur des fonctions
```c++
template <class T>
T somme (T a, T b)
{
  return a + b;
}
```

sur des classes
```c++

template <class T>
class Point {

	protected:
	  T _x;      // Abcisse
	  T _y;      // Ordonnée
	public :
	  // Constructeur par défaut
	  Point() : _x(0), _y(0) {}
	  // Constructeur
	  Point(T x, T y) : _x(x), _y(y) {}
	  // Accès à x
	  const T x() const {return _x;}
	  // Accès à y
	  const T y() const {return _y;}
	  // Translation
	  void translation(T x, T y);

}; 

template <class T> void
Point<T>::translation(T x, T y)
{
  _x += x; 
  _y += y; 
}
```
