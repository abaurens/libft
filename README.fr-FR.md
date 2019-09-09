# Libft
Ma lib perso. A l'origine, elle contenais l'ensemble des fonctions requises par le projet `libft` de 42.  
Je l'ai en suite étendue en y ajoutant mes fonctions au fur et a mesure de mes envies, besoins et curiositées.

La lib est divisée en "modules" affin de simplifier son développement.  
Les makefiles permettent une expansion simplifiée via l'ajout rapide de nouveaux modules.

## Modules :

- ### ftio

   Contiens les fonctions d'entrée/sortie

- ### ftlib  
   Contiens les fonctions de String processing et de memory managment.
- ### ftmath  
   Ensemble de diverses fonctions mathémathiques déjà présentes dans la libmath système, mais ayant le double avantage d'être instructives et autorisées par 42 quelque-soit les sujets.
- ### ftregex  
   _(WIP)_ Tentative de recréation d'un système de parsing et processing d'expression régulières.
- ### ftcipher  
   Module de cryptographie. _(Ne contiens qu'une fonction de chiffrement perso pour le moment)_

## Compilation :

Le seul Makefile que vous devriez avoir à lancer est celui appelé `Makefile` à la racine du dépot (exécuté par defaut via la commande `make`).  
Lancé sans argument, il devrait compilera une version statique `libft.a` de la librairie.  
Une version dynamique `libft.so` peut être crée avec les commande `make so` ou `make libft.so`

*GIF de la compilation ici*

## Dépendances :

Pour compiler la lib, le Makefile a besoin des commandes suivantes:  
`rm` `cp` `ln` `ar` `gcc` `tr` `sed` `awk` `cut` `sort` `echo` `mkdir` `which` `printf` `ranlib` et `sh`.  

Si l'une des commandes `rm` `cp` `ln` `ar` `mkdir` ou `gcc` n'existe pas, le makefile sera incapable de compiler la librairie.

Notez cependant que vous pouvez les remplacer dans le makefile `variables.mk` se trouvant a la racine du dépot, ou directement via la ligne de commande en indiquant une valeur aux variables associées (`RM` `CP` `LN` `CC` `AR` et `MKDIR`):  
`make CC=clang AR='libtool -static -o'`
```
Les valeurs par défaut des variables sont:
  RM    = rm -rf
  CP    = cp -rf
  LN    = ln -s
  AR    = ar -rc
  CC    = gcc
  MKDIR = mkdir -p
```
Les autres variables ne sont pas utilisées pour la compilation, mais sont necessaire pour permettre l'activation du `fancy mode` du makefile. Le fancy mode correspond a l'affichage custom de la progression de la compilation de la librairie (présentée dans le gif un peu plus haut).
Le fancy mode est automatiquement desactivé en l'absence de l'une de ces commandes.

Nottez égallement que vous pouvez forcer la désactivation du fancy mode en passant l'argument `FANCY_MODE=FALSE` par la ligne de commande:  
`make FANCY_MODE=FALSE`

Bien que j'essaye un maximum de ne pas dépendre d'autres libs, pour le moment la libft dépend toujours de la présence préalable d'une lib C standard tel que la glibc.  
Cependant, je fais de mon mieux pour rester fixé au C89 (ansi) et pour ne pas utiliser d'éventuelles extensions (pedantic).  
À ce jour, les seules exceptions sont la fonction `ft_printf` et ses variantes (majoritairement à cause de la gestion des `long long`) ainsi qu'une petite partie de `ftmath`...

Bien entendu, l'intégralité de la lib est a la norme (2.0.2) de 42
