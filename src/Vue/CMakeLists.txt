
#
# DESS IA : Correction du TP1 : fichier CMakeLists.txt
#

# Le sous projet
PROJECT(Vue)

# les fichiers 'header'
SET(Vue_inc
	View.h
	Screen.h
	screens.h
	Screen_0.h
	Screen_Jeux.h
	Screen_Multi.h
	Screen_Multi2.h
	Screen_Select.h
)

# les fichiers 'source'
SET(Vue_src
	Screen_0.cpp
	Screen_Jeux.cpp
	View.cpp
	Screen_Multi.cpp
	Screen_Multi2.cpp
	Screen_Select.cpp
)

# On cree une librairie
ADD_LIBRARY(Vue ${Vue_inc} ${Vue_src})
