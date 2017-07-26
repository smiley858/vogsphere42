# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    readme.txt                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbaraud <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/22 15:29:38 by rbaraud           #+#    #+#              #
#    Updated: 2017/07/22 15:33:00 by rbaraud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Salut !

//////// REGLES GIT ////////
Voici quelques informations sur la structure de notre repo git.

- ne pas utiliser le dossier ex00 qui ne sera rempli que demain soir afin
	d'éviter des problèmes de fichiers fantomes.
- commits réguliers et explicites selon règles évoquées sur le slack.


//////// MAN UTILISATION FICHIERS ////////
- Chaque fichier a son .h correspondant (meme nom sauf pour le main.c dont
	le .h correspondant se nomme rush02.h).
- Pas de fichiers envoyés avant mise à la norme. Tout fichier, meme temporaire,
	doit etre à la norme avant d'etre partagé (sinon on oubliera quelque chose).
- L'ensemble des fonctions d'un fichier doivent etre prototypées dans son .h
	correspondant. Afin que d'éventuelles incohérences soient signalées lors
	de la compilation.


//////// FICHIERS ////////
main.c
Le coeur de notre programme, son hub, tout en part et tout (ou presque) y revient.
	Comprendra probablement les fonctions d'affichage et d'erreur.

classics.c :
Réunis les fonctions d'affichage ou de manipulation basiques de 42 : ft_putchar,
	ft_putstr, ft_strcmp, etc.

format_input.c :
Système de vérification des inputs de read et de mise en mémoire dans un buffer
	de type tableau de char à deux dimensions. (#malloc)

reco_rush.c :
Fonctions de vérification de l'input. Communément appelées algorithmes de
	reconnaissance.


//////// NOTA BENE ////////
NB sur compilation et norminette :
- on compilera grace à un Makefile (racine du dossier) avec cc et les flags
	-Wall -Wextra -Werror
- la norminette fonctionne sans flags. Donc détecte les prototypages qui ne sont
	pas dans les fichiers header correpondants.

NB sur malloc :
- Toujours sécuriser ses mallocs (sinon 0).
- Tourjours free() un malloc inutile pour la suite.
