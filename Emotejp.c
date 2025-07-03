#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Liste d'emojis
const char *emojis[] = {"😀", "😂", "😎", "😍", "🥳", "🤖", "💖", "✨", "🐬", "🪩", "🐍", "❤️", "🩷", "🌷", "💚", "🍓", "🌸", "💗", "💞", "🐢", "🌎", "🍮", "💐", "🌶️", "☘️", "🪿", "🧶", "💝", "🐣", "🐈‍⬛", "🦋", "🍼"};
const int emoji_count = sizeof(emojis) / sizeof(emojis[0]);

// Liste de textes en romaji
const char *textes_japonais[] = {
    "Konnichiwa", 
    "Arigatou", 
    "Sayonara", 
    "Ogenki desu ka", 
    "Watashi wa gakusei desu",
"tomodachi"
};
const int texte_count = sizeof(textes_japonais) / sizeof(textes_japonais[0]);

// Fonction pour générer un emoji aléatoire
void may_package_emote() {
    srand(time(NULL));
    int index = rand() % emoji_count;
    printf("Emoji aléatoire: %s\n", emojis[index]);
}

// Fonction pour générer un texte en japonais romaji aléatoire
void may_package_japon() {
    srand(time(NULL));
    int index = rand() % texte_count;
    printf("Texte japonais (romaji): %s\n", textes_japonais[index]);
}

// Fonction pour afficher un emoji et un texte en japonais romaji
void may_package_jpemote() {
    may_package_emote();
    may_package_japon();
}