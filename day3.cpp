#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//job1:
// int main() {
//     string texte_original = "vive la plateforme!";
//     string texte_majuscule = texte_original;
//
//     transform(texte_majuscule.begin(), texte_majuscule.end(),
//                    texte_majuscule.begin(), ::toupper);
//     cout << texte_original << endl;
//     cout << texte_majuscule << endl;
// }

//job2:
// bool estVoyelle(char c) {
//     // Trouver les voyelles
//     return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
// }
//
// int main() {
//     std::string texte = "vive la plateforme !";
//     cout << texte << endl;
//
//     texte.erase(
//         remove_if(texte.begin(), texte.end(), estVoyelle),
//         texte.end()
//     );
//     cout << "Texte sans voyelles: " << texte << endl;
//
//     return 0;
// }

//job3:
// // Fonction pour comparer 2 chaines de caractères
// int comparerChaines(const std::string& chaine1, const std::string& chaine2) {
//     if (chaine1 == chaine2) {
//         return 0;
//     } else {
//         return 1;
//     }
// }
//
// int main() {
//     string one = "la vie est belle";
//     string two = "il fait beau";
//     string three = "il fait beau";
//
//     int resultat = comparerChaines(three, two);
//     std::cout << "Phrase 1: "<< three << " / Phrase 2: " << two << std::endl;
//     std::cout << resultat << std::endl;
// }

//job4:
// int main() {
//     std::string texte = "vive la plateforme";
//
//     // Méthode size()
//     std::cout << "Nombre de caracteres (size): " << texte.size() << std::endl;
//
//     // Méthode length() - fait exactement la même chose que size()
//     std::cout << "Nombre de caracteres (length): " << texte.length() << std::endl;
//
//     return 0;
// }

//job5:
// #include <regex>
//
// bool verifierFormatHeure(const std::string& heure) {
//     // Utilisation de regex pour vérifier le format XXhXX
//     std::regex formatHeure("^[0-9]{2}h[0-9]{2}$");
//
//     // Vérification du format avec la regex
//     if (!std::regex_match(heure, formatHeure)) {
//         return false;
//     }
//
//     // Extraction des heures et minutes pour vérifier leur validité
//     int heures = std::stoi(heure.substr(0, 2));
//     int minutes = std::stoi(heure.substr(3, 2));
//
//     // Vérification que les heures sont entre 0 et 23
//     // et que les minutes sont entre 0 et 59
//     return (heures >= 0 && heures <= 23 && minutes >= 0 && minutes <= 59);
// }
//
// int main() {
//     std::string entreUtilisateur;
//
//     // Demander à l'utilisateur d'entrer une heure
//     std::cout << "Veuillez entrer une heure au format XXhXX : ";
//     std::cin >> entreUtilisateur;
//
//     // Vérification du format
//     if (verifierFormatHeure(entreUtilisateur)) {
//         std::cout << "Format d'heure valide !" << std::endl;
//     } else {
//         std::cout << "Format d'heure invalide. Utilisez le format XXhXX (ex: 14h30)." << std::endl;
//     }
//
//     return 0;
// }

//job6:
#include <array>
//
// int main() {
//     // Déclaration d'un tableau de 10 entiers
//     std::array<int, 10> T;
//
//     // Demande à l'utilisateur de saisir 10 entiers
//     std::cout << "Veuillez saisir 10 entiers :" << std::endl;
//
//     // Boucle pour saisir les 10 entiers et les insérer dans le tableau
//     for (int i = 0; i < 10; ++i) {
//         std::cout << "Entier " << (i + 1) << " : ";
//         std::cin >> T[i];
//     }
//
//     // Compter les entiers supérieurs à 5
//     int compteur = std::count_if (T.begin(), T.end(), [](int x) { return x >= 5; });
//
//     // Affichage du résultat
//     std::cout << "Nombre d'entiers superieurs ou egaux a 5 = " << compteur << std::endl;
//
//     return 0;
// }

//job7:
#include <limits>  // Pour std::numeric_limits

int main() {
    // Déclaration d'un tableau de 10 entiers
    std::array<int, 10> T;

    // Demande à l'utilisateur de saisir 10 entiers
    std::cout << "Veuillez saisir 10 entiers :" << std::endl;

    // Boucle pour lire les 10 entiers
    for (int i = 0; i < 10; ++i) {
        std::cout << "Entier " << (i + 1) << " : ";
        std::cin >> T[i];
    }

    // Variables pour stocker la valeur maximale et son indice
    int max_value = std::numeric_limits<int>::min(); // Initialise avec la valeur minimale possible
    int max_index = -1;

    // Parcours du tableau pour trouver le plus grand élément
    for (int i = 0; i < 10; ++i) {
        if (T[i] > max_value) {
            max_value = T[i];
            max_index = i;
        }
    }

    // Affichage du résultat
    std::cout << "Le plus grand element est " << max_value << ", situe a l'indice " << max_index << std::endl;
    std::cout << "(Position " << (max_index + 1) << " dans la liste)" << std::endl;

    return 0;
}

