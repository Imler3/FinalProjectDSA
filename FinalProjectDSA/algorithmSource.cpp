//
// Created by jenni on 8/2/2024.
//

#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>


struct Player {
    std::string name;
    int eliminations;
    float kill_death_ratio;
    int top1;
    float composite_score;
    Player(const std::string& n, int e, float kdr, int t1)
        : name(n), eliminations(e), kill_death_ratio(kdr), top1(t1), composite_score(0.0f) {}
};
inline void heapifyDown(std::vector<Player>& arr, int n, int i, bool (*compare)(Player, Player))
{
    int biggest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && compare(arr[left], arr[biggest]))
        biggest = left;

    if (right < n && compare(arr[right], arr[biggest]))
        biggest = right;

    if (biggest != i)
    {
        std::swap(arr[i], arr[biggest]);
        heapifyDown(arr, n, biggest, compare);
    }
}

inline void heapSort(std::vector<Player>& arr, bool (*compare)(Player, Player))
{
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        heapifyDown(arr, n, i, compare);

    for (int i = n - 1; i >= 0; i--) {
        std::swap(arr[0], arr[i]);
        heapifyDown(arr, i, 0, compare);
    }
}

inline bool compareElimination(Player a, Player b)
{
    return a.eliminations > b.eliminations;
}

inline bool compareKillDeathRatio(Player a, Player b)
{
    return a.kill_death_ratio > b.kill_death_ratio;
}
inline bool compareCompositeScore(Player a, Player b)
{
    return a.composite_score > b.composite_score;
}
inline void calculateCompositeScores(std::vector<Player>& players) {
    int maxEliminations = 0;
    float maxKillDeathRatio = 0.0f;
    int maxTop1 = 0;

    for (const auto& player : players) {
        if (player.eliminations > maxEliminations) maxEliminations = player.eliminations;
        if (player.kill_death_ratio > maxKillDeathRatio) maxKillDeathRatio = player.kill_death_ratio;
        if (player.top1 > maxTop1) maxTop1 = player.top1;
    }

    for (auto& player : players) {
        float normalizedEliminations = maxEliminations == 0 ? 0 : static_cast<float>(player.eliminations) / maxEliminations;
        float normalizedKillDeathRatio = maxKillDeathRatio == 0 ? 0 : player.kill_death_ratio / maxKillDeathRatio;
        float normalizedTop1 = maxTop1 == 0 ? 0 : static_cast<float>(player.top1) / maxTop1;


        float weightEliminations = 0.35f; // Eliminations are almost just as important as wins
        float weightKillDeathRatio = 0.25f;
        float weightTop1 = 0.4f;

        player.composite_score = (weightEliminations * normalizedEliminations) +
            (weightKillDeathRatio * normalizedKillDeathRatio) +
            (weightTop1 * normalizedTop1);
    }
}

inline std::vector<Player> loadPlayersFromCSV(const std::string& filename, int category) {
    std::vector<Player> players;
    std::ifstream file(filename);
    std::string line;

    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return players;
    }

    // Skip header
    std::getline(file, line);

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