Editeur Géométrique
===================


##Specification :


##Description du programme :

Ce programme a pour but de permettre la création, puis la manipulation de formes géométriques depuis une interface console. Les différents éléments géométriques disponibles sont : Le cercle, Le rectangle, la ligne et la poly-ligne( qui seront plus amplement décrits plus tard).

De plus, il permettra la sauvegarde sous forme de fichier texte d`une session de travail ainsi que sa restauration.

##Description des classes :

Notre programme s`appuie sur dix-huit classes différentes.

#CliParser :

Cette classe permet de traiter les lignes de commandes entrées dans la console, ces lignes sont stockées dans un vecteur afin de gérer les sauvegardes que souhaite faire l`utilisateur.

Méthodes publique:

`void InputCmd (vector<string> cmd)`: une méthode qui se charge d'identifier la commande entrée.
`void InputParser (istream &is)`: une méthode de "découpage" qui se charge de récuperer la commande dans le flux d'entrée.

Méthodes privées:
`bool intchecker(string buff)`:permet de vérifier si la chaîne de caractère passée en paramètre représente bien un nombre( même si elle est de type `String`.

Attributs :
-`vector<string> currentCommandInput`: un vector stockant la commande à traiter par le parser.

-`vector<Commande*> executionline`: ici sont stockés les lignes de commande afin de conserver l'historique de celles-ci
et ainsi de pouvoir effectué des "undo-redo".

-`vector<Commande*> executionlinesecondary`: ce deuxième vecteur sert à gérer certaines suite de commandes complexes, et est utilisé en parallèle de `executionline`, chaque UNDO transfert la commande dans ce vector, le REDO porte sur ce vector.

-`map <string,ElemtGeo*> objectStore`: map qui sert à stocker les éléments géométriques.

-`bool undoMode`: Flag permettant le bon fonctionnement du programme lors d'une commande UNDO.

-`bool loadingMode`:Flag permettant le bon fonctionnement du programme lors d'une commande LOAD.



#ElemtGeo {virtual}:

Cette classe parente des classes cercle, rectangle et PolyLigne, définit les méthodes principales de chacune des classe qu`elle fait hériter.

Méthodes :

- `virtual void Move(long x, long y)` : permet le déplacement d`un élément.

- `virtual void getSaveCommande()` : permet l'obtention de la commande de sauvegarde actuelle d`un élément.

- `string getName()` : permet l'obtention du nom de l'objet (caractéristique commune entre tous les objets hérités) .

Attributs :

- `string name` : le nom de l'objet.

#Classe FCercle :

Cette classe permet de créer un cercle définit par son centre et son rayon, ainsi que de le manipuler.

Méthodes :

- `void Move(long x, long y)` : permet le déplacement du cercle (en déplaçant son centre).

- `void getSaveCommande()` : permet l'obtention de la commande de sauvegarde actuelle du cercle.

Attributs :

- `point Centre` : un point représentant le centre du cercle

- `int Rayon` : La valeur du rayon du cercle ( qui peut être nul)

#Classe FRectangle :

Cette classe permet de créer en mémoire un rectangle définit par les coordonnées de ses deux sommets opposés.

.Méthodes :

- `void Move(long x, long y)` : permet le déplacement du rectangle (en déplaçant ses 2 points attributs).

- `void getSaveCommande()` : permet l'obtention de la commande de sauvegarde actuelle du rectangle.

Attributs :

- `Point CSG` : le point définissant le coin supérieur gauche du rectangle

- `Point CID` : le point définissant le coin inférieur droit du rectangle

#Classe FLigne :

Cette classe permet de créer une ligne définie 2 points.

Méthodes :

- `void Move(long x, long y)` : permet le déplacement de la ligne (en déplaçant ses 2 points attributs).

- `void getSaveCommande()` : permet l'obtention de la commande de sauvegarde actuelle de la ligne.

Attributs :

- `Point P1` : premier point de la ligne .

- `Point P2` : deuxième point de la ligne.

#Classe FPolyligne :

Cette classe permet de créer une polyligne définie par une suite (Un) de points ordonnée, avec n>=1

Méthodes :

- `void Move(long x, long y)` : permet le déplacement de la polyligne (en déplaçant ses 2 points attributs).

- `void getSaveCommande()` : permet l'obtention de la commande de sauvegarde actuelle de la polyligne.

Attributs :

- `Vector<point> CoordPL` : conteneur de tous les points de la polyligne.

#Classe Aggregate :

Cette classe permet de regrouper plusieurs éléments géométriques et de les manipuler conjointement.
ATTENTION : la suppression d`un agrégat ne permet pas de supprimer les éléments constitutifs.

Methodes :

- `void Move(long x, long y)` : permet le déplacement de la polyligne (en déplaçant ses 2 points attributs).

- `void getSaveCommande()` : permet l'obtention de la commande de sauvegarde actuelle de la polyligne.

- `void Adder(string name)` : permet l'ajout d'un objet dans un aggregat après le UNDO de sa suppression.

- `void Deleter(string name)` : permet la suppression d'un objet dans un aggregat.

Attributs :

- `Vector<ElementGéo *> ListeElems` : un tableau contenant tous les éléments constituant l`agrégat.

- `Vector<ElementGéo *> deleted` : un tableau contenant tous les éléments supprimés constituant l`agrégat, pour une eventuelle restauration.

#Classe Point :

Cette classe permet la création et la manipulation de points constituant nos éléments géométriques.

Méthodes :

- `void Point(long X, long Y) `: le constructeur de la classe point qui permet de créer un point de coordonnées (X,Y).

- `void Move(long dX,long dY)` : déplace le point suivant un vecteur dX/dY.

Attributs :

- `long X` : Abscisse du point.

- `long Y` : Ordonnée du point.

#Classe Commande {Virtual} :

Cette classe parente toutes les classes qui permettent  de gérer les commandes que l’utilisateur entre sur la console. 

Méthodes :

virtual void execute (map<string,ElemtGeo*>* mapInsert) ;
virtual void undo(map<string, ElemtGeo*>*mapInsert):

 Ces méthodes, héritée par toutes les classe qui héritent de commande, fournit à ces-dernières la collection sur laquelle elles vont travailler.

#Classe CAjouterCercle :

Méthodes :

`void execute (map<string,ElemtGeo*>* mapInsert)` ;
`void undo(map<string, ElemtGeo*>*mapInsert)`:

Ces methodes permettent à la fois de construire un cercle dans la collection de l’ensemble des objets
Tout en sauvegardant les informations nécessaire dans la liste de commande.

Attributs :
	
`String name` : Nom qui sera affecté au cercle créé par la classe.
`String ligneCommande` : Permet la sauvegarde de la ligne de commande .
`String commentaireCommande`:
`long x1`: Coordonné du point du centre du cercle
`long x2`: Coordonné du point du centre du cercle
`long r`: Rayon du cercle.

#Classe CAjouterRectangle :

Méthodes :

`void execute (map<string,ElemtGeo*>* mapInsert)` ;
`void undo(map<string, ElemtGeo*>*mapInsert)`:

Ces methodes permettent à la fois de construire un élément géométrique dans la collection de l’ensemble des objets
Tout en sauvegardant les informations nécessaire dans la liste de commande.

Attributs :
	
`String name` : Nom qui sera affecté à l’élément créé par la classe.
`String ligneCommande` : Permet la sauvegarde de la ligne de commande .
`String commentaireCommande`:
`long x1`: Coordonné du point du coin supérieur gauche du rectangle
`long x2`: Coordonné du point du coin inférieur droit
`long y1` : Coordonné du point du coin supérieur gauche du rectangle
`long y2` : Coordonné du point du coin inférieur droit.

#Classe CAjouterLigne :

Méthodes :

`void execute (map<string,ElemtGeo*>* mapInsert)` ;
`void undo(map<string, ElemtGeo*>*mapInsert)`:

Ces methodes permettent à la fois de construire un élément géométrique dans la collection de l’ensemble des objets
Tout en sauvegardant les informations nécessaire dans la liste de commande.

Attributs :
	
`String name` : Nom qui sera affecté à l’élément créé par la classe.
`String ligneCommande` : Permet la sauvegarde de la ligne de commande .
`String commentaireCommande`:
`long x1`: Coordonné du premier point de la ligne
`long x2`: Coordonné du point du deuxième point de la ligne
`long y1` : Coordonné du premier point de la ligne 
`long y2` : Coordonné du point du deuxième point de la ligne


#Classe CAjouterPolyLigne :

Méthodes :

`void execute (map<string,ElemtGeo*>* mapInsert)` ;
`void undo(map<string, ElemtGeo*>*mapInsert)`:

Ces methodes permettent à la fois de construire un élément géométrique dans la collection de l’ensemble des objets
Tout en sauvegardant les informations nécessaire dans la liste de commande.

Attributs :
	
`String name` : Nom qui sera affecté à l’élément créé par la classe.
`String ligneCommande` : Permet la sauvegarde de la ligne de commande .
`String commentaireCommande`:
`Vector <long> coordonnees` : Cette collection d’entier servira à créer tous les points de la polyligne.




#Classe CMove:
Cette classe est appelée lors de l’entrée du mot clé « MOVE » dans la console, elle permet d’accéder à chaque élément désiré et de modifier leurs paramètres .

Méthodes :

`void execute (map<string,ElemtGeo*>* mapInsert)` ;
`void undo(map<string, ElemtGeo*>*mapInsert)`:

Ces méthodes permettent d’accéder à la liste des éléments via leur paramètre et de modifier les points des éléments voulus.
Attributs :
	
`long dx` : déplacement appliqué au attribut en « X » des points des éléments concernés.
`long dy` : déplacement appliqué au attribut en « Y» des points des éléments concernés.
`String object` : stocke les noms des éléments à modifier.

#Classe CDelete:
Cette classe est appelée lors de l’entrée du mot clé « DELETE » dans la console, elle permet d’accéder à un ou plusieurs éléments et de le/les supprimés.

Méthodes :

`void execute (map<string,ElemtGeo*>* mapInsert)` ;
`void undo(map<string, ElemtGeo*>*mapInsert)`:

Ces méthodes permettent d’accéder à la liste des éléments via leur paramètre et de modifier les points des éléments voulus.
Attributs :
	
`Vector<string> condamnes : récupère les éléments qui vont être supprimés` ;
`Vector<pair<string,ElemtGeo*>> bak `: permet la sauvegarde des éléments détruits afin de permettre une éventuelle restitution de ceux-ci.


#Classe CClear:
Cette classe est appelée lors de l’entrée du mot clé «CLEAR » dans la console, elle permet 
D’enlever tous les éléments présents dans la collection.

Méthodes :

`void execute (map<string,ElemtGeo*>* mapInsert)` ;
`void undo(map<string, ElemtGeo*>*mapInsert)`:

Ces méthodes permettent d’accéder à la liste des éléments via leur paramètre et de modifier les points des éléments voulus.
Attributs :
	
`Vector<pair<string,ElemtGeo*>> bak` : permet la sauvegarde des éléments détruits afin de permettre une éventuelle restitution de ceux-ci.


#Classe CLoad:
Cette classe est appelée lors de l’entrée du mot clé «LOAD » dans la console, elle permet 
D’éxécuter  rapidement toutes les instruction contenues dans un fichier passé en paramètre par l’utilisateur.
Méthodes :

`void execute (map<string,ElemtGeo*>* mapInsert)` ;
`void undo(map<string, ElemtGeo*>*mapInsert)`:

Ces méthodes permettent d’accéder à la liste des éléments via leur paramètre et de modifier les points des éléments voulus.
Attributs :
	
`Vector<pair<string,ElemtGeo*>>map bak` : permet la sauvegarde des éléments chargés afin de permettre une éventuelle restitution de la situation précédent l’instruction LOAD.


