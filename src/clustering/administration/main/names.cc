// Copyright 2010-2012 RethinkDB, all rights reserved.
#include "utils.hpp"
#include "clustering/administration/main/names.hpp"

const char* names[] = {
    "Akasha",
    "Alchemist",
    "Antimage",
    "Apparition",
    "Axe",
    "Bane",
    "Batrider",
    "Beastmaster",
    "Bloodseeker",
    "Brewmaster",
    "Broodmother",
    "Centaur",
    "Chaosknight",
    "Chen",
    "Clinkz",
    "Clockwerk",
    "Courier",
    "Darkseer",
    "Dazzle",
    "Disruptor",
    "Doombringer",
    "Dragonknight",
    "Drow",
    "Earthshaker",
    "Enchantress",
    "Enigma",
    "Ezalor",
    "Faceless",
    "Gondar",
    "Gyrocopter",
    "Huskar",
    "Invoker",
    "Jakiro",
    "Juggernaut",
    "Krobelus",
    "Kunkka",
    "Lanaya",
    "Lancer",
    "Leshrac",
    "Lich",
    "Lifestealer",
    "Lina",
    "Lion",
    "Luna",
    "Lycanthrope",
    "Magnus",
    "Medusa",
    "Meepo",
    "Mirana",
    "Morphling",
    "Mortred",
    "Necrolyte",
    "Nevermore",
    "Nightstalker",
    "Nyx",
    "Ogre",
    "Omniknight",
    "Ostarion",
    "Outworld",
    "Phoenix",
    "Prophet",
    "Puck",
    "Pudge",
    "Pugna",
    "Razor",
    "Rhasta",
    "Riki",
    "Roshan",
    "Rubick",
    "Rylai",
    "Sandking",
    "Shadowdemon",
    "Silencer",
    "Siren",
    "Slardar",
    "Slark",
    "Sniper",
    "Spectre",
    "Spiritbreaker",
    "Stormspirit",
    "Sven",
    "Sylla",
    "Tidehunter",
    "Tinker",
    "Tiny",
    "Treant",
    "Undying",
    "Ursa",
    "Vengeful",
    "Venomancer",
    "Viper",
    "Visage",
    "Warlock",
    "Weaver",
    "Windrunner",
    "Wisp",
    "Witchdoctor",
    "Zeus"
};

std::string get_random_machine_name() {
    int index = randint(sizeof(names) / sizeof(char *));
    return std::string(names[index]);
}
