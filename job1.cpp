#include <iostream>
#include <iomanip>  // pour nbre de chiffre après la virgule

// job 0:
// a = x+5;
// a = (x=y) + 2;
// a = x==y;
// a<b && c<d;
// (i++) * (n+p);


//job1:
// char c = '\x01';
// short int p = 10;
// short int x = p + 3;
// int y = c + 1;
// short int z = p + c;
// short int w = 3 * p + 5 * c;

// job 2:
// int main() {
//     for (int i = 1)
//     std::cout << "Hello world" << std::endl;
//         return 0;
// }

// job3:

//job4:
// int main() {
//     // Déclaration des variables
//     double nombre1, nombre2, somme;
//
//     // Demande du premier nombre à l'utilisateur
//     std::cout << "Entrez le premier nombre : ";
//     std::cin >> nombre1;
//
//     // Demande du deuxième nombre à l'utilisateur
//     std::cout << "Entrez le deuxieme nombre : ";
//     std::cin >> nombre2;
//
//     // Calcul de la somme
//     somme = nombre1 + nombre2;
//
//     // Résultat
//     std::cout << "La somme de " << nombre1 << " et " << nombre2 << " est : " << somme << std::endl;
//
//     return 0;
// }

//job5:
// int main() {
//     // Déclaration des variables
//     double nombre1, nombre2, produit;
//
//     // Demande du premier nombre à l'utilisateur
//     std::cout << "Entrez le premier nombre : ";
//     std::cin >> nombre1;
//
//     // Demande du deuxième nombre à l'utilisateur
//     std::cout << "Entrez le deuxieme nombre : ";
//     std::cin >> nombre2;
//
//     // Calcul de la somme
//     produit = nombre1 * nombre2;
//
//     // Résultat
//     std::cout << "Le produit de " << nombre1 << " et " << nombre2 << " est : " << produit << std::endl;
//
//     return 0;
// }

//job06:
// int main() {
//     int n;
//     std::cout << "Entrez un nombre : ";
//     std::cin >> n;
//
//     std::cout << "\nTable de multiplication de " << n << " :\n" << std::endl;
//     for (int i = 1; i <= 10; i++) {
//         std::cout << n << " x " << i << " = " << (n * i) << std::endl;
//     }
//     return 0;
// }

//job07:
// int main() {
//     int n;
//     std::cout << "Enter a number: ";
//     std::cin >> n;
//
//     if (n % 2 == 0) {
//         std::cout << "Le nombre " << n << " est pair." << std::endl;
//     } else {
//         std::cout << "Le nombre " << n << " est impair." << std::endl;
//     }
//     return 0;
// }

//job08:
// int main() {
//     // Déclaration de la variable pour stocker l'année
//     int annee;
//
//     // Demande à l'utilisateur d'entrer une année
//     std::cout << "Entrez une annee : ";
//     std::cin >> annee;
//
//     // Vérification si l'année est bissextile: divisible par 4, pas par 100, sauf si elle est divisible par 400
//     bool estBissextile = false;
//
//     if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
//         estBissextile = true;
//     }
//
//     // Affichage du résultat
//     if (estBissextile) {
//         std::cout << "L'annee " << annee << " est bissextile." << std::endl;
//     } else {
//         std::cout << "L'annee " << annee << " n'est pas bissextile." << std::endl;
//     }
//
//     return 0;
// }

//job09:
// int main() {
//     // Déclaration des variables pour les trois entiers
//     int nombre1, nombre2, nombre3, maximum;
//
//     // Demande à l'utilisateur d'entrer les trois nombres
//     std::cout << "Entrez le premier nombre : ";
//     std::cin >> nombre1;
//
//     std::cout << "Entrez le deuxieme nombre : ";
//     std::cin >> nombre2;
//
//     std::cout << "Entrez le troisieme nombre : ";
//     std::cin >> nombre3;
//
//     // Détermination du maximum
//     maximum = nombre1; // On suppose initialement que le premier nombre est le plus grand
//
//     if (nombre2 > maximum) {
//         maximum = nombre2;
//     }
//
//     if (nombre3 > maximum) {
//         maximum = nombre3;
//     }
//
//     std::cout << "Le plus grand nombre parmi " << nombre1 << ", " << nombre2 << " et " << nombre3;
//     std::cout << " est : " << maximum << std::endl;
//
//     return 0;
// }

//job10:
// int main() {
//     // Déclaration des variables
//     double prixHT_kilo;   // Prix HT d'un kilo de carottes
//     double quantite;      // Nombre de kilos de carottes
//     double tauxTVA;       // Taux de TVA en pourcentage
//     double prixHT_total;  // Prix HT total
//     double montantTVA;    // Montant de la TVA
//     double prixTTC;       // Prix TTC final
//
//     // Demande des informations à l'utilisateur
//     std::cout << "Bienvenue au programme de calcul de prix pour le marché de Noailles\n" << std::endl;
//
//     std::cout << "Entrez le prix HT d'un kilo de carottes (en euros) : ";
//     std::cin >> prixHT_kilo;
//
//     std::cout << "Entrez le nombre de kilos de carottes : ";
//     std::cin >> quantite;
//
//     std::cout << "Entrez le taux de TVA (en %) : ";
//     std::cin >> tauxTVA;
//
//     // Calculs
//     prixHT_total = prixHT_kilo * quantite;
//     montantTVA = prixHT_total * (tauxTVA / 100);
//     prixTTC = prixHT_total + montantTVA;
//
//     // Affichage des résultats avec formatage pour 2 décimales
//     std::cout << std::fixed << std::setprecision(2);
//     std::cout << "\n--- Facture ---" << std::endl;
//     std::cout << "Prix HT pour 1 kg de carottes : " << prixHT_kilo << " euros" << std::endl;
//     std::cout << "Quantite achetee : " << quantite << " kg" << std::endl;
//     std::cout << "Prix HT total : " << prixHT_total << " euros" << std::endl;
//     std::cout << "Taux de TVA : " << tauxTVA << " %" << std::endl;
//     std::cout << "Montant de la TVA : " << montantTVA << " euros" << std::endl;
//     std::cout << "Prix TTC : " << prixTTC << " euros" << std::endl;
//
//     return 0;
// }

//job13:
// int main() {
//     // Déclaration des variables
//     int N;
//     long long somme = 0; // Utilisation de long long pour gérer des grands nombres
//
//     std::cout << "Entrez un entier N (doit être superieur ou égal à 5) : ";
//     std::cin >> N;
//
//     if (N < 5) {
//         std::cout << "Erreur : N doit être superieur ou égal à 5." << std::endl;
//         return 1; // Quitte le programme avec code d'erreur
//     }
//
//     // Calcul de la somme des cubes de 5^3 à N^3
//     for (int i = 5; i <= N; i++) {
//         // Calcul du cube de i et ajout à la somme
//         long long cube = i * i * i;
//
//         somme += cube;
//     }
//
//     std::cout << "La somme des cubes de 5^3 à " << N << "^3 est : " << somme << std::endl;
//     return 0;
// }

//job14:
int main() {
    // Déclaration des variables
    int nombre;
    int nombreInverse = 0;

    // Demande à l'utilisateur d'entrer un nombre
    std::cout << "Entrez un nombre entier positif : ";
    std::cin >> nombre;

    // Vérification que le nombre est positif
    if (nombre < 0) {
        std::cout << "Erreur : veuillez entrer un nombre positif." << std::endl;
        return 1; // Quitte le programme avec code d'erreur
    }

    // Sauvegarde du nombre original pour l'affichage
    int nombreOriginal = nombre;

    // Inversion du nombre
    while (nombre > 0) {
        // Extraction du dernier chiffre
        int dernier_chiffre = nombre % 10;

        // Ajout du dernier chiffre au nombre inversé
        nombreInverse = nombreInverse * 10 + dernier_chiffre;

        // Suppression du dernier chiffre du nombre original
        nombre = nombre / 10;
    }

    // Affichage du résultat
    std::cout << "Le nombre " << nombreOriginal << " inversé donne : " << nombreInverse << std::endl;

    return 0;
}
