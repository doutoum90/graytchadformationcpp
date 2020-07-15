# Langage C++ 9

##  Manipulation des fichiers 

1- bibliothèque
```c++
#include <fstream>

``` 
2- Lecture d'un fichier
```c++
// création de flux en écriture
ofstream nomFluxEcriture{chemin_fichier_ecriture};
// ecrire dans le flux
nomFluxEcriture << "Lalekou grayTchad"<< endl;
nomFluxLecture.close()
```

3- Ecriture d'un fichier
```c++
// création de flux en lecture
ifstream nomFluxLecture{chemin_fichier_lecture}
// lire dans un mot depuis le flux
string mot; 
nomFluxLecture >> mot; 
// changement de mode
nomFluxLecture.ignore(); 
// lire une ligne depuis le flux
string ligne; 
getline(nomFluxLecture, ligne); 
nomFluxEcriture.close()
```
