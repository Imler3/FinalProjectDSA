#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>

struct Player1 {
    int player_id;
    int matches_played;
    double win_ratio;
    double minutes_played;
    int total_score;
};

// Function to calculate the composite score for a player
inline double calculateCompositeScore1(const Player1& player) {
    double weight_matches = 0.15;
    double weight_win_ratio = 0.40;
    double weight_minutes = 0.15;
    double weight_total_score = 0.30;

    return (player.matches_played * weight_matches) +
           (player.win_ratio * weight_win_ratio) +
           (player.minutes_played * weight_minutes) +
           (player.total_score * weight_total_score);
}

// Comparison function to compare two players based on their composite score
inline bool comparePlayers(const Player1& p1, const Player1& p2) {
    return calculateCompositeScore1(p1) > calculateCompositeScore1(p2);
}

inline void merge(std::vector<Player1>& arr, int left, int mid, int right, bool (*compare)(const Player1&, const Player1&)) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<Player1> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (compare(L[i], R[j]))
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}

inline void mergeSort(std::vector<Player1>& arr, int left, int right, bool (*compare)(const Player1&, const Player1&)) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid, compare);
    mergeSort(arr, mid + 1, right, compare);
    merge(arr, left, mid, right, compare);
}

inline std::vector<Player1> loadPlayersFromCSV1(const std::string& filename, int category) {
    std::vector<Player1> players;
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
    int j = 0;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        int totalScore;
        std::string block;
        int matches_played;
        double win_ratio;
        double minutes_played;
        std::string temp;

        for (int i = 0; i < n; i++) {
            std::getline(ss, block, ',');
        }

        std::getline(ss, temp, ',');
        totalScore = std::stoi(temp);
        std::getline(ss, block, ',');
        std::getline(ss, block, ',');
        std::getline(ss, temp, ',');
        win_ratio = std::stod(temp);
        std::getline(ss, temp, ',');
        matches_played = std::stoi(temp);
        std::getline(ss, block, ',');
        std::getline(ss, temp, ',');
        minutes_played = std::stod(temp);

        players.emplace_back(Player1{j, matches_played, win_ratio, minutes_played, totalScore});
        j++;
    }

    file.close();
    return players;
}
#pragma endregion
