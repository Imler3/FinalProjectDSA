// Michelle Garcia
#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>

// Structure to hold player data
struct Player1 {
    int player_id;           // Unique identifier for the player
    int matches_played;      // Number of matches played by the player
    double win_ratio;        // Win ratio of the player
    double minutes_played;   // Total minutes played by the player
    int total_score;         // Total score of the player
};


// Function to calculate the composite score for a player
inline double calculateCompositeScore1(const Player1& player) {
    // Weights for each attribute
    double weight_matches = 0.15;
    double weight_win_ratio = 0.40;
    double weight_minutes = 0.15;
    double weight_total_score = 0.30;

     // Composite score calculation
    return (player.matches_played * weight_matches) +
           (player.win_ratio * weight_win_ratio) +
           (player.minutes_played * weight_minutes) +
           (player.total_score * weight_total_score);
}

// Comparison function to compare two players based on their composite score
inline bool comparePlayers(const Player1& p1, const Player1& p2) {
    // Returns true if the composite score of p1 is greater than p2
    return calculateCompositeScore1(p1) > calculateCompositeScore1(p2);
}

// Function to merge two subarrays of arr[]
inline void merge(std::vector<Player1>& arr, int left, int mid, int right, bool (*compare)(const Player1&, const Player1&)) {
    int n1 = mid - left + 1;  // Size of the left subarray
    int n2 = right - mid;     // Size of the right subarray

    // Temporary arrays to hold the left and right subarrays
    std::vector<Player1> L(n1), R(n2);
    
// Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
 // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (compare(L[i], R[j]))
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    // Copy the remaining elements of L[], if any
    while (i < n1)
        arr[k++] = L[i++];

    // Copy the remaining elements of R[], if any
    while (j < n2)
        arr[k++] = R[j++];
}

// Function to perform merge sort on the array
inline void mergeSort(std::vector<Player1>& arr, int left, int right, bool (*compare)(const Player1&, const Player1&)) {
    if (left >= right)
        return;


    int mid = left + (right - left) / 2;
    // Recursively sort the first and second halves
    mergeSort(arr, left, mid, compare);
    mergeSort(arr, mid + 1, right, compare);
    // Merge the sorted halves
    merge(arr, left, mid, right, compare);
}

// Function to load players from a CSV file based on the specified category
inline std::vector<Player1> loadPlayersFromCSV1(const std::string& filename, int category) {
    std::vector<Player1> players;
    std::ifstream file(filename);
    std::string line;

    // Check if the file opened successfully
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return players;
    }

     // Skip the header line
    std::getline(file, line);

    
   // Determine the number of columns to skip based on the category
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
    
     int j = 0;  // Player ID counter
    
    // Read data from the file line by line
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        int totalScore;
        std::string block;
        int matches_played;
        double win_ratio;
        double minutes_played;
        std::string temp;
        
       // Skip the specified number of columns
        for (int i = 0; i < n; i++) {
            std::getline(ss, block, ',');
        }

        // Extract player attributes from the CSV line
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

        // Add the player to the players vector
        players.emplace_back(Player1{j, matches_played, win_ratio, minutes_played, totalScore});
        j++;
    }

    file.close(); // Close the file
    return players;  // Return the list of players
}
#pragma endregion
