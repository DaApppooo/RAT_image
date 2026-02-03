#ifndef _IMAGE_H
#define _IMAGE_H

#include "Pixel.h"

class Image
{
private:
  Pixel* tab;
  int dimx, dimy;
public:
  // Constructeur de la classe : initialise dimx et dimy à 0
  // n’alloue aucune mémoire pour le tableau de pixel
  Image(int dimx, int dimy);
  // Destructeur de la classe : déallocation de la mémoire du tableau de pixels
  // et mise à jour des champs dimx et dimy à 0
  ~Image();
  // Récupère le pixel original de coordonnées (x,y) en vérifiant sa validité.
  // La formule pour passer d'un tab 2D à un tab 1D est tab[y*dimx+x]
  Pixel& getPix(int x, int y);
  // Récupère le pixel original de coordonnées (x,y) en vérifiant sa validité.
  Pixel getPix(int x, int y) const;
  // Modifie le pixel de coordonnées (x,y)
  void setPix(int x, int y, Pixel color);
  // Dessine un rectangle plein de la couleur dans l'image
  // (en utilisant setPix, indices en paramètre compris)
  void dessinerRectangle(int xmin, int ymin, int xmax, int ymax, Pixel color);
  // Efface l'image en la remplissant de la couleur en paramètre
  // (en appelant dessinerRectangle avec le bon rectangle)
  void effacer(Pixel color);
  // Effectue une série de tests vérifiant que toutes les fonctions fonctionnent et
  // font bien ce qu’elles sont censées faire, ainsi que les données membres de
  // l'objet sont conformes
  static void testRegression();
};


#endif
