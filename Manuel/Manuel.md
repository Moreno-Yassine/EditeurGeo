EditeurGeo -- Edition et stockage d'éléements géométriques
==========================================================

## DESCRIPTION

Ce logicile permet, de génerer différents éléments géométriques tels que des cercles,
des rectangles, des lignes et des polylignes, et de les stockés en mémoire. Il offre également la possibilité
de revenir en arrière si l'utilisateur le désire. L'intégralité de l'intéraction avec l'utilisateur 
s'effectue en mode console, cette dernière confirmant, ou infirmant grâce à un message, la validité de
l'action demandée.

## COMMANDES DISPONIBLES

#Generation d'éléments géométriques

Une fois le logiciel lancé, les commandes suivantes permettent de créer des éléments géométriques:

>Note: chaque élément est repéré par son nom (ici représenté par 'Name')

 * `C Name X1 Y1 R` pour créer un cercle;
	-Le couple `X1 Y1` sont les coordonnées du centre du cercle,
	-'R' est sont rayon,
 * `R Name X1 Y1 X2 Y2` pour créer un rectangle;
	-Le couple `X1 Y1` sont les coordonnées du coin supérieur gauche du rectangle,
	-Le couple `X2 Y2` sont les coordonnées du coin inférieur droit du rectangle,
 * `L NAME X1 Y1 X2 Y2` pour créer une ligne;
	-Le couple `X1 Y1` sont les coordonnées du premier point duquel part la ligne,
	-`X2 Y2` représentent la fin de celle-ci,
 * `PL NAME X1 Y1 X2 Y2` ...` Xn Yn` pour créer une polyligne
	-Ici, chaque couple `Xi Yi` sont les coordonnées des points par lesquels passe la polyligne.
	Notons que l'ordre est ici important.
 * `OA Name-1 Name-2`... `Name-n` pour créer un objet agrégé, ce dernier et une collection qui contient
 touts les objets nommés dans la ligne de commande.

#Commandes auxiliaires

Les commandes suivantes permettent d'intéragir avec l'ensemble des objets précedement créés ou de sauvegarder ou
de charger en mémoire des fichiers textes.

 *`DELETE Name1 Name2 ... NameN` Supprime les objets nommés dans la ligne de commande.
  

 * `MOVE Name X Y` Déplace l'objet nommé;
   - Le couple 'X Y' définit le vecteur de déplacement de **touts les points de l'objet**,
   
 * `LIST` Affiche la liste de touts les objets actuellement stocké en mémoire;

 * `UNDO` Annule la dernière opération;

 * `REDO` Annule le dernier UNDO;

 * `LOAD filename` Charge le fichier nommé en mémoire et éxécute ligne par ligne son contenu(s'il est 
 cohérent);
   
* `SAVE filename` Sauvegarde l'ensemble courant dans un fichier du nom de 'filename.txt';  

* `CLEAR` Efface touts les objets précédemment créés;

* `EXIT` Ferme l'application.
