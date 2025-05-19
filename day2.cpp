#include <iostream>
#include <cmath> // Pour la fonction sqrt()

using namespace std;

//job01:
// int main() {
//     double n;
//     do {
//         cout << "Donnez un nombre > 0 : ";
//         cin >> n;
//     } while (n <= 0);
// }

//job02:
// int main() {
//     int n;
//     cin >> n;
//     switch (n) {
//         case 0: cout << "Nul\n"; // Nul Petit
//         case 1: // Petit
//         case 2: cout << "Petit\n";
//             break;
//         case 3:
//         case 4: // Moyen Grand
//         case 5: cout << "Moyen\n";
//         Default : cout << "Grand\n";
// // 10 nothing
// // -5 nothing
//     }
// }

//job03:

// int main() {
//     int i = 0;
//     int som = 0;
//     int n;
//     while (i < 4) {
//         cout << "Donnez un entier\n";
//         cin >> n;
//         som += n;
//         i++;
//     }
//     cout << "Somme : " << som;
// }


// int main() {
//     int i, n, som;
//     som=0;
//     i = 0;
//     do {
//         cout << "Donnez un entier";
//         cin >> n;
//         som += n;
//         i++;
//         } while (i<4);
//     cout << "Somme:" << som;
// }

//job04 calculator:
// int main() {
//     double n1, n2;
//     char op;
//     bool continuer = true;
//
//     while (continuer) {
//         cout << "\nCalculatrice" << endl;
//         cout << "\nEntrez le premier nombre : ";
//         cin >> n1;
//
//         cout << "Entrez l'operateur (+, -, *, /) : ";
//         cin >> op;
//
//         cout << "Entrez le deuxieme nombre : ";
//         cin >> n2;
//
//         switch (op) {
//             case '+':
//                 cout << "Resultat : " << n1 << " + " << n2 << " = " << (n1  + n2) << endl;
//                 break;
//             case '-':
//                 cout << "Resultat : " << n1  << " - " << n2 << " = " << (n1  - n2) << endl;
//                 break;
//             case '*':
//                 cout << "Resultat : " << n1  << " * " << n2 << " = " << (n1  * n2) << endl;
//                 break;
//             case '/':
//                 if (n2 != 0) {
//                     cout << "Resultat : " << n1  << " / " << n2 << " = " << (n1  / n2) << endl;
//                 } else {
//                     cout << "Erreur : Division par zero impossible" << endl;
//                 }
//                 break;
//             default:
//                 cout << "Erreur : Operateur non reconnu" << endl;
//         }
//
//         char choix;
//         cout << "\nVoulez-vous effectuer un autre calcul ? (o/n) : ";
//         cin >> choix;
//
//         if (choix != 'o') {
//             continuer = false;
//         }
//     }
//
//     cout << "\nMerci d'avoir utilise la calculatrice !" << endl;
//
//     return 0;
// }

//job05:
// int main() {
//     double note;
//     cout << "Entrez une note (entre 0 et 20)\n" << endl;
//     cin >> note;
//     if (note < 0 || note > 20) {
//         cout << "Erreur : La note doit etre comprise entre 0 et 20." << endl;
//     } else {
//         if (note > 10) {
//             cout << "valide" << endl;
//         } else {
//             cout << "non valide" << endl;
//         }
//     }
// }

//job06:
// int main () {
//     int n;
//
//     while (true) {
//         // Demande à l'utilisateur d'entrer la valeur de n
//         cout << "Entrez un entier positif n : ";
//         cin >> n;
//
//         if (n <= 0) {
//             cout << "Veuillez entrer un entier positif." << endl;
//             continue;
//         }
//         break;
//     }
//
//     cout << "Verification des multiples de 3 ou 5 jusqu'a " << n << " :" << endl;
//
//     // Itère de 1 à n
//     for (int i = 1; i <= n; i++) {
//         // Vérifie si i est un multiple de 3 ou de 5
//         if (i % 3 == 0 || i % 5 == 0) {
//             cout << i << " : ";
//             if (i % 3 == 0) {
//                 cout << "multiple de 3";
//             }
//             if (i % 3 == 0 && i % 5 == 0) {
//                 cout << " et ";
//             }
//             if (i % 5 == 0) {
//                 cout << "multiple de 5";
//             }
//             cout << endl;
//         } else {
//             cout << i << " : n'est ni multiple de 3 ni de 5" << endl;
//         }
//     }
//
//     return 0;
// }

//job07 boucle for:
// int main() {
//     int a, b;
//
//     cout << "Entrez la valeur de a (borne inferieure) : ";
//     cin >> a;
//
//     cout << "Entrez la valeur de b (borne superieure) : ";
//     cin >> b;
//
//     // Vérifier si a est inférieur ou égal à b
//     if (a <= b) {
//         cout << "Les entiers de " << a << " à " << b << " sont : " << endl;
//
//         // Affichage des entiers de a à b
//         for (int i = a; i <= b; i++) {
//             cout << i << " "; // espace après chaque i
//         }
//         cout << endl;
//     } else {
//         // Option : afficher quand même les nombres dans l'ordre décroissant
//         cout << "Les entiers de " << a << " a " << b << " (ordre decroissant) sont : " << endl;
//         for (int i = a; i >= b; i--) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }

//job08 boucle while:
// int main() {
//     int a, b;
//
//     cout << "Entrez la valeur de a (borne inferieure) : ";
//     cin >> a;
//
//     cout << "Entrez la valeur de b (borne superieure) : ";
//     cin >> b;
//
//     // Vérifier si a est inférieur ou égal à b
//     if (a <= b) {
//         cout << "Les entiers de " << a << " a " << b << " sont : " << endl;
//
//         // Affichage des entiers de a à b
//         int i = a;
//         while (i <= b) {
//             cout << i << " "; // espace après chaque i
//             i++;
//         }
//         cout << endl;
//     } else {
//         // Option : afficher quand même les nombres dans l'ordre décroissant
//         cout << "Les entiers de " << a << " a " << b << " (ordre decroissant) sont : " << endl;
//         int i = a;
//         while (i >= b) {
//         cout << i << " ";
//         i--;
//         }
//         cout << endl;
//     }
//
//     return 0;
// }

//job09:
// int main() {
//     int a, b;
//
//     // Saisie des bornes avec vérification
//     do {
//         cout << "Entrez la borne inferieure a (entier naturel) : ";
//         cin >> a;
//
//         if (a < 0) {
//             cout << "Erreur : 'a' doit etre un entier naturel (≥ 0)." << endl;
//             continue;
//         }
//
//         cout << "Entrez la borne superieure b (entier naturel, b > a) : ";
//         cin >> b;
//
//         if (b < 0) {
//             cout << "Erreur : 'b' doit etre un entier naturel (≥ 0)." << endl;
//             continue;
//         }
//
//         if (a >= b) {
//             cout << "Erreur : 'b' doit etre strictement superieur à 'a'." << endl;
//             continue;
//         }
//
//         // Si on arrive ici, a et b sont valides
//         break;
//
//     } while (true);
//
//     // Affichage des bornes pour que l'utilisateur sache à quoi jouer
//     cout << "\nJeu : Devinez un nombre entre " << a << " et " << b << " (inclus)." << endl;
//
//     int nombre;
//     cout << "Entrez un entier : ";
//     cin >> nombre;
//
//     if (nombre >= a && nombre <= b) {
//         cout << "GAGNE" << endl;
//     } else {
//         cout << "PERDU" << endl;
//     }
//
//     return 0;
// }

//job10:
// int main() {
//     double nombre;
//
//     cout << "Ce programme calcule la racine carree d'un nombre reel positif." << endl;
//     cout << "Entrez 0 pour quitter le programme." << endl;
//
//     do {
//         cout << "\nEntrez un nombre reel positif (0 pour quitter) : ";
//         cin >> nombre;
//         if (nombre == 0) {
//             cout << "Vous avez saisi 0. Fin du programme." << endl;
//             break; // Sortir de la boucle
//         }
//
//         // Vérifier si le nombre est négatif
//         if (nombre < 0) {
//             cout << "Erreur : impossible de calculer la racine carree d'un nombre negatif." << endl;
//         } else {
//             // Calculer la racine carrée
//             double racine = sqrt(nombre);
//             cout << "La racine carree de " << nombre << " est : " << racine << endl;
//         }
//
//     } while (true); // Boucle infinie, on sort avec break quand nombre == 0
//
//     return 0;
// }

//job11:
// int main() {
//     int nombre;
//     unsigned long long factorielle = 1; // Type qui peut contenir de grands nombres
//
//     // Demande à l'utilisateur d'entrer un nombre
//     cout << "Entrez un nombre entier positif : ";
//     cin >> nombre;
//
//     // Vérifie si le nombre est négatif
//     if (nombre < 0) {
//         cout << "Erreur : La factorielle n'est pas definie pour les nombres negatifs." << endl;
//     } else {
//         // Affichage du début du calcul
//         cout << nombre << "! = ";
//
//         // Cas particulier pour 0!
//         if (nombre == 0) {
//             cout << "1 (par definition)" << endl;
//         } else {
//             // Affiche le début du processus
//             cout << "1";
//
//             // Calcul de la factorielle avec affichage des étapes
//             for (int i = 2; i <= nombre; i++) {
//                 cout << " * " << i << " (" << (factorielle * i) << ")";
//                 factorielle *= i;
//             }
//             // Affiche le résultat final
//             cout << " = " << factorielle << endl;
//         }
//
//         // Affiche également le résultat sous forme d'équation
//         cout << "\nResultat final : " << nombre << "! = " << factorielle << endl;
//     }
//
//     return 0;
// }

//job12:
// int main() {
//     int n;
//     double somme = 0.0;
//
//     // Demander à l'utilisateur d'entrer le nombre de termes
//     cout << "\nCalculer la somme des n premiers termes de la serie harmonique" << endl;
//     cout << "\nEntrez la valeur de n (nombre entier positif) : ";
//     cin >> n;
//
//     // Vérifier si n est positif
//     if (n <= 0) {
//         cout << "Erreur : n doit etre un entier positif." << endl;
//         return 1;
//     }
//
//     // Calcul de la somme avec affichage des étapes
//     cout << "Calcul de H(" << n << ") = ";
//
//     for (int i = 1; i <= n; i++) {
//         // Ajouter le terme 1/i à la somme
//         somme += 1.0 / i;
//
//         // Afficher le terme actuel
//         cout << "1/" << i;
//
//         // Ajouter un signe + si ce n'est pas le dernier terme
//         if (i < n) {
//             cout << " + ";
//         }
//     }
//
//     // Afficher le résultat final avec une bonne précision
//     cout << "\n\nLa somme des " << n << " premiers termes = " << somme << endl;
//
//     // Afficher également le résultat avec processus détaillé
//     cout << "\nProcessus de calcul etape par etape :" << endl;
//     double sommePartielle = 0.0;
//
//     for (int i = 1; i <= n; i++) {
//         sommePartielle += 1.0 / i;
//         cout << "H(" << i << ") = " << sommePartielle << endl;
//     }
//
//     return 0;
// }