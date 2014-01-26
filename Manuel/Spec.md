Editeur Géométrique
===================


###Specification :


##Description du programme :

Ce programme a pour but de permettre la création, puis la manipulation de formes géométriques depuis une interface console. Les différents éléments géométriques disponibles sont : Le cercle, Le rectangle, la ligne et la poly-ligne( qui seront plus amplement décrits plus tard).

De plus, il permettra la sauvegarde sous forme de fichier texte de l'intégralité d'une session de travail ainsi que sa restauration.

Description des classes :

Notre programme s'appuie sur sept classes différentes.

#CliParser :

Cette classe permet de traiter les lignes de commandes entrées dans la console, ces lignes sont stockées dans un vecteur afin de gérer les sauvegardes que souhaite faire l'utilisateur.

Méthodes:

- 'void Sauvegarder()' : Recopie l'historique des commandes dans un fichier texte.

- 'void Charger()' : Récupère un historique à partir d'un fichier texte.

- 'void Clear()' : Efface touts les élément géométriques créés au cour de la session sans effacer l'historique des commandes.

- 'void Enum()' : Énumère les différents éléments existant lors de l'appel de la méthode.

- 'void Exit()' : Ferme la session en cours.

Attributs :

- 'vector <char **> Commandes' : Ce conteneur de l'ensemble des commandes précédemment exécutées ordonnées chronologiquement.








#ElementGéo {virtual}:

Cette classe parente des classes cercle, rectangle et PolyLigne, définit les méthodes principales de chacune des classe qu'elle fait hériter.

Méthodes :

- 'void Ajouter()' : permet l'ajout d'un élément.

- 'void Suppression()' : permet la suppression d'un élément.

- 'void Deplacer()' : permet le déplacement d'un élément.

#Classe Cercle :

Cette classe permet de créer un cercle définit par son centre et son rayon, ansi que de le manipuler.

Méthodes :

- 'void Ajouter( String Name, Point Centre, int Rayon)' : Fait appel au constructeur de la classe Cerlce et créer un cercle de centre p et de rayon Rayon.

- 'void Supprimer()' : Efface de la mémoire le cercle passé en paramètre.

- 'void Deplacer( int dX, int dY)' : Déplace le point p, centre du cercle, d'un vecteur de coordonnées dX/dY .


Attributs :

- 'point Centre' : un point représentant le centre du cercle

- 'int Rayon' : La valeur du rayon du cercle ( qui peut être nul)

- 'String name' : contient le nom du cercle.

#Classe Rectangle :

Cette classe permet de créer en mémoire un rectangle définit par les coordonnées de ses deux sommets opposés.

.Méthodes :

- 'void Ajouter( String name, Point p1, Point p2)' : Permet la création d'un rectangle ayant pour sommets opposés les deux points passés en paramètre de la fonction.

- 'void Supprimer()' : Supprime de la mémoire de rectangle passé en paramètre.

- 'void Déplacer( int dX, int dY)' : Déplace l'ensemble des points du rectangle d'un vecteur de coordonnées dX/dY


Attributs :

- 'Point CSG' : le point définissant le coin supérieur gauche du rectangle

- 'Point CID' : le point définissant le coin inférieur droit du rectangle

- 'String Name' : contient le nom du rectangle.


#Ligne :

Cette classe permet de créer une ligne définie 2 points.

Méthodes :

- 'void Ajouter(String name,Point P1, Point P2)' : Ajoute en mémoire une ligne définie par les points P1 et P2.

- 'void Supprimer()' : Supprime de la mémoire la ligne passée en paramètre de la fonction.

- 'void déplacer(int dX, int dY)' : déplace l'ensemble des points de la ligne d'un vecteur dX/dY .

Attributs :

- 'Point P1' : premier point de la ligne .

- 'Point P2' : deuxième point de la ligne.

- 'String Name' : nom de l'entité créée.





#Polyligne :

Cette classe permet de créer une polyligne définie par une suite (Un) de points ordonnée, avec n>=1

Méthodes :

- 'void Ajouter(String name, vector <Point> Coord)' : Ajoute en mémoire une polyligne définie par les segments existants entre les points successifs de vecteur Coord.

- 'void Supprimer()' : Supprime de la mémoire la polyligne passée en paramètre de la fonction.

- 'void déplacer(int dX, int dY)' : déplace l'ensemble des points de la polyligne d'un vecteur dX/dY .

Attributs :

- 'Vector<point> CoordPL' : conteneur de tous les points de la polyligne.

- 'String Name': nom de l'entité créée.



#Classe Agrégat :

Cette classe permet de regrouper plusieurs éléments géométriques et de les manipuler conjointement.
ATTENTION : la suppression d'un agrégat ne permet pas de supprimer les éléments constitutifs.

Methodes :

- 'void Creer(Vector<string> Noms)' : on crée un agrégat contenant tous les objets nommés dans le vecteur passé en paramètre.

- 'void Supprimer()' : on supprime l'agrégat crée, ceci n'a aucun impact sur les éléments contenus.

- 'void Deplacer(int dX,int dY)' : on déplace tous les objets contenus dans l'agrégat A.

Attributs :

- 'Vector<ElementGéo *> ListeElems' : un tableau contenant tous les éléments constituant l'agrégat.

#Classe Point :

Cette classe permet la création et la manipulation de points constituant nos éléments géométriques.

Méthodes :

- 'void Point(int X, int Y) ': le constructeur de la classe point qui permet de créer un point de coordonnées (X,Y).

- 'void Déplacer(int dX,int dY') : déplace le point suivant un vecteur dX/dY.

Attributs :

- 'int X' : Abscisse du point.

- 'int Y' : Ordonnée du point.












#Classe Commande {Virtual} :

Cette classe parente toutes les classes qui permettent  de gérer les commandes que l’utilisateur entre sur la console. 

Méthodes :

virtual void execute (map<string,ElemtGeo*>* mapInsert) ;
virtual void undo(map<string, ElemtGeo*>*mapInsert):

 Ces méthodes, héritée par toutes les classe qui héritent de commande, fournit à ces-dernières la collection sur laquelle elles vont travailler.

Classe CAjouterCercle :

Méthodes :

'void execute (map<string,ElemtGeo*>* mapInsert)' ;
'void undo(map<string, ElemtGeo*>*mapInsert)':

Ces methodes permettent à la fois de construire un cercle dans la collection de l’ensemble des objets
Tout en sauvegardant les informations nécessaire dans la liste de commande.

Attributs :
	
'String name' : Nom qui sera affecté au cercle créé par la classe.
'String ligneCommande' : Permet la sauvegarde de la ligne de commande .
'String commentaireCommande':
'int x1': Coordonné du point du centre du cercle
'int x2': Coordonné du point du centre du cercle
'int r': Rayon du cercle.

#Classe CAjouterRectangle :

Méthodes :

'void execute (map<string,ElemtGeo*>* mapInsert)' ;
'void undo(map<string, ElemtGeo*>*mapInsert)':

Ces methodes permettent à la fois de construire un élément géométrique dans la collection de l’ensemble des objets
Tout en sauvegardant les informations nécessaire dans la liste de commande.

Attributs :
	
'String name' : Nom qui sera affecté à l’élément créé par la classe.
'String ligneCommande' : Permet la sauvegarde de la ligne de commande .
'String commentaireCommande':
'int x1': Coordonné du point du coin supérieur gauche du rectangle
'int x2': Coordonné du point du coin inférieur droit
'int y1' : Coordonné du point du coin supérieur gauche du rectangle
'int y2' : Coordonné du point du coin inférieur droit.



#Classe CAjouterLigne :

Méthodes :

'void execute (map<string,ElemtGeo*>* mapInsert)' ;
'void undo(map<string, ElemtGeo*>*mapInsert)':

Ces methodes permettent à la fois de construire un élément géométrique dans la collection de l’ensemble des objets
Tout en sauvegardant les informations nécessaire dans la liste de commande.

Attributs :
	
'String name' : Nom qui sera affecté à l’élément créé par la classe.
'String ligneCommande' : Permet la sauvegarde de la ligne de commande .
'String commentaireCommande':
'int x1': Coordonné du premier point de la ligne
'int x2': Coordonné du point du deuxième point de la ligne
'int y1' : Coordonné du premier point de la ligne 
'int y2' : Coordonné du point du deuxième point de la ligne


#Classe CAjouterPolyLigne :

Méthodes :

'void execute (map<string,ElemtGeo*>* mapInsert)' ;
'void undo(map<string, ElemtGeo*>*mapInsert)':

Ces methodes permettent à la fois de construire un élément géométrique dans la collection de l’ensemble des objets
Tout en sauvegardant les informations nécessaire dans la liste de commande.

Attributs :
	
'String name' : Nom qui sera affecté à l’élément créé par la classe.
'String ligneCommande' : Permet la sauvegarde de la ligne de commande .
'String commentaireCommande':
'Vector <int> coordonnees' : Cette collection d’entier servira à créer tous les points de la polyligne.




#Classe CMove:
Cette classe est appelée lors de l’entrée du mot clé « MOVE » dans la console, elle permet d’accéder à chaque élément désiré et de modifier leurs paramètres .

Méthodes :

'void execute (map<string,ElemtGeo*>* mapInsert)' ;
'void undo(map<string, ElemtGeo*>*mapInsert)':

Ces méthodes permettent d’accéder à la liste des éléments via leur paramètre et de modifier les points des éléments voulus.
Attributs :
	
'Int dx' : déplacement appliqué au attribut en « X » des points des éléments concernés.
'Int dy' : déplacement appliqué au attribut en « Y» des points des éléments concernés.
'String object' : stocke les noms des éléments à modifier.

#Classe CDelete:
Cette classe est appelée lors de l’entrée du mot clé « DELETE » dans la console, elle permet d’accéder à un ou plusieurs éléments et de le/les supprimés.

Méthodes :

'void execute (map<string,ElemtGeo*>* mapInsert)' ;
'void undo(map<string, ElemtGeo*>*mapInsert)':

Ces méthodes permettent d’accéder à la liste des éléments via leur paramètre et de modifier les points des éléments voulus.
Attributs :
	
'Vector<string> condamnes : récupère les éléments qui vont être supprimés' ;
'Vector<pair<string,ElemtGeo*>> bak ': permet la sauvegarde des éléments détruits afin de permettre une éventuelle restitution de ceux-ci.


#Classe CClear:
Cette classe est appelée lors de l’entrée du mot clé «CLEAR » dans la console, elle permet 
D’enlever tous les éléments présents dans la collection.

Méthodes :

'void execute (map<string,ElemtGeo*>* mapInsert)' ;
'void undo(map<string, ElemtGeo*>*mapInsert)':

Ces méthodes permettent d’accéder à la liste des éléments via leur paramètre et de modifier les points des éléments voulus.
Attributs :
	
'Vector<pair<string,ElemtGeo*>> bak' : permet la sauvegarde des éléments détruits afin de permettre une éventuelle restitution de ceux-ci.


#Classe CLoad:
Cette classe est appelée lors de l’entrée du mot clé «LOAD » dans la console, elle permet 
D’éxécuter  rapidement toutes les instruction contenues dans un fichier passé en paramètre par l’utilisateur.
Méthodes :

'void execute (map<string,ElemtGeo*>* mapInsert)' ;
'void undo(map<string, ElemtGeo*>*mapInsert)':

Ces méthodes permettent d’accéder à la liste des éléments via leur paramètre et de modifier les points des éléments voulus.
Attributs :
	
'Vector<pair<string,ElemtGeo*>>map bak' : permet la sauvegarde des éléments chargés afin de permettre une éventuelle restitution de la situation précédent l’instruction LOAD.


