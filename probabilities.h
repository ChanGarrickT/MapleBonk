int probabilities[59][20] = {
    {1, 2, 3, 4, 5, 6, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10},
    {1, 2, 3, 4, 5, 6, 6, 7, 7, 8, 8, 8, 8, 9, 9, 9,  9, 10, 10, 10},
    {1, 2, 3, 4, 5, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9,  9, 10, 10, 10},
    {1, 2, 3, 4, 5, 6, 6, 6, 6, 7, 7, 8, 8, 8, 9, 9,  9, 10, 10, 10},
    {1, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 8, 9, 9,  9, 10, 10, 10}, // 145
    {1, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 7, 8, 8, 8, 9,  9,  9, 10, 10},
    {1, 2, 3, 4, 4, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8,  9,  9, 10, 10},
    {1, 2, 3, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8,  9,  9, 10, 10},
    {1, 2, 3, 3, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 8, 8,  9,  9, 10, 10},
    {1, 2, 3, 3, 4, 4, 4, 5, 5, 6, 6, 6, 7, 7, 8, 8,  9,  9, 10, 10}, // 150
    {1, 2, 3, 3, 4, 4, 5, 5, 5, 6, 6, 6, 6, 7, 7, 8,  8,  9,  9, 10},
    {1, 2, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6, 7, 7, 7,  8,  8,  9, 10},
    {1, 2, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 7, 7,  8,  8,  9, 10},
    {1, 2, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 7, 7,  8,  8,  9, 10},
    {1, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 7, 7,  8,  8,  9, 10}, // 155
    {1, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 7, 7,  8,  8,  9, 10},
    {1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 7,  8,  8,  9, 10},
    {1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7,  8,  8,  9, 10},
    {1, 1, 1, 2, 2, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7,  8,  8,  9, 10},
    {1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7,  7,  8,  9, 10}, // 160
    {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 7,  7,  8,  9, 10},
    {1, 1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7,  7,  8,  9, 10},
    {1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6,  7,  8,  9, 10},
    {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6,  7,  8,  9, 10},
    {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6,  7,  8,  9, 10}, // 165
    {1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6,  6,  7,  8,  9},
    {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6,  6,  7,  8,  9},
    {1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6,  6,  7,  8,  9},
    {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6,  6,  7,  8,  9},
    {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5,  6,  7,  8,  9}, // 170
    {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 4, 4, 4, 5, 5,  6,  6,  7,  8},
    {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5,  5,  6,  7,  8},
    {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5,  5,  6,  7,  8},
    {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 5,  5,  6,  7,  8},
    {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4,  5,  6,  7,  8}, // 175
    {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4,  5,  5,  6,  7},
    {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4,  5,  5,  6,  7},
    {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4,  5,  5,  6,  7},
    {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4,  4,  5,  6,  7},
    {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3,  4,  5,  6,  7}, // 180
    {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3,  4,  4,  5,  6},
    {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3,  3,  4,  5,  6},
    {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3,  3,  4,  5,  6},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3,  3,  4,  5,  6},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2,  3,  4,  5,  6}, // 185
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2,  3,  3,  4,  5},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2,  2,  3,  4,  5},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2,  2,  3,  4,  5},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2,  2,  3,  3,  4},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2,  2,  2,  3,  3}, // 190
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2,  2,  2,  2,  3},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2,  2,  2,  2,  3},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2,  2,  2,  2,  2},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2,  2,  2,  2,  2},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  2,  2,  2,  2}, // 195
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1,  2,  2,  2},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1,  1,  2,  2},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1,  1,  1,  2},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  1,  1,  1,  1}
};