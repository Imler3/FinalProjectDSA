//
// Created by Jennifer Senra Bruzon
// This code is my part of the project it was created before the GitHub was set up.

// Include all necessary libraries
#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>

// Definion of struct to represent a player
struct Player {
    std::string name; // Player's name
    int eliminations; // Number of eliminations
    float kill_death_ratio; // Kill/Death ration
    int top1; // Number of wins which is being top 1 in a match
    float composite_score; // The composite score that helps the sort determine ranking
    Player(const std::string& n, int e, float kdr, int t1) // constructor used to initialize the Player object
        : name(n), eliminations(e), kill_death_ratio(kdr), top1(t1), composite_score(0.0f) {}
};

// Function that performs a hepify operation in the heap
inline void heapifyDown(std::vector<Player>& arr, int n, int i, bool (*compare)(Player, Player))
{
    int biggest = i; // initializes the biggest as root
    int left = 2 * i + 1; // left child index
    int right = 2 * i + 2; // right child index

    // Check if the left child exists and if it is bigger than the root
    if (left < n && compare(arr[left], arr[biggest]))
        biggest = left;

    // Check if the right child exists and if it is bigger than the root
    if (right < n && compare(arr[right], arr[biggest]))
        biggest = right;

    // If the root is not the largest then it swaps with the largest and continues
    if (biggest != i)
    {
        std::swap(arr[i], arr[biggest]);
        heapifyDown(arr, n, biggest, compare);
    }
}

// Function that performs the heap sort
inline void heapSort(std::vector<Player>& arr, bool (*compare)(Player, Player))
{
    int n = arr.size();

    // Builds the heap to reasrange the array
    for (int i = n / 2 - 1; i >= 0; i--)
        heapifyDown(arr, n, i, compare);

    // Extracts every element from the heap
    for (int i = n - 1; i >= 0; i--) {
        std::swap(arr[0], arr[i]);
        heapifyDown(arr, i, 0, compare);
    }
}

// Comparison function to sort player based on eliminations
inline bool compareElimination(Player a, Player b)
{
    return a.eliminations > b.eliminations;
}

// Comparison function to sort player based on kill/death ratio
inline bool compareKillDeathRatio(Player a, Player b)
{
    return a.kill_death_ratio > b.kill_death_ratio;
}

// Comparison function to sort player based on a composite score
inline bool compareCompositeScore(Player a, Player b)
{
    return a.composite_score > b.composite_score;
}

// Function that calculates the composite score for each player
inline void calculateCompositeScores(std::vector<Player>& players) {
    int maxEliminations = 0; // Sets max eliminations to zero
    float maxKillDeathRatio = 0.0f; // Sets max kill death ratio to zero
    int maxTop1 = 0; // Sets max top 1 to zero

    // Find maximum values by normalizing
    for (const auto& player : players) {
        if (player.eliminations > maxEliminations) maxEliminations = player.eliminations;
        if (player.kill_death_ratio > maxKillDeathRatio) maxKillDeathRatio = player.kill_death_ratio;
        if (player.top1 > maxTop1) maxTop1 = player.top1;
    }

    // Calculate the composite score for each player
    for (auto& player : players) {
        float normalizedEliminations = maxEliminations == 0 ? 0 : static_cast<float>(player.eliminations) / maxEliminations;
        float normalizedKillDeathRatio = maxKillDeathRatio == 0 ? 0 : player.kill_death_ratio / maxKillDeathRatio;
        float normalizedTop1 = maxTop1 == 0 ? 0 : static_cast<float>(player.top1) / maxTop1;

        // Weights that were dermined for each metric
        float weightEliminations = 0.35f; // Eliminations are almost just as important as wins
        float weightKillDeathRatio = 0.25f;
        float weightTop1 = 0.4f;

        // Creates a composite score based on eliminations, kill death ratio, and top1
        player.composite_score = (weightEliminations * normalizedEliminations) +
            (weightKillDeathRatio * normalizedKillDeathRatio) +
            (weightTop1 * normalizedTop1);
    }
}

// Function used to load players from the csv file where all the data is
inline std::vector<Player> loadPlayersFromCSV(const std::string& filename, int category) {
    std::vector<Player> players;
    std::ifstream file(filename);
    std::string line;

    // Checks if file is open
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return players;
    }

    // Skip header
    std::getline(file, line);

    // Determine the column to read based on the category needed
    int n = 1;

    if (category == 1) {
        n = 1;
    }
    else if (category == 2) {
        n = 8;
    }
    else if (category == 3) {
        n = 15;
    }
    else if (category == 4) {
        n = 22;
    }

    // Read data from the file
    while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string name;
            std::string block;
            int eliminations;
            float kill_death_ratio;
            int top1;
            std::string temp;

            std::getline(ss, name, ',');
            for (int i = 0; i < n; i++) {
                std::getline(ss, block, ',');
            }
            std::getline(ss, temp, ',');
            top1 = std::stoi(temp);
            std::getline(ss, temp, ',');
            kill_death_ratio = std::stof(temp);
            std::getline(ss, block, ',');
            std::getline(ss, block, ',');
            std::getline(ss, temp, ',');
            eliminations = std::stoi(temp);

            players.emplace_back(name, eliminations, kill_death_ratio, top1);
    }

    file.close();
    return players;
}

#pragma endregion
