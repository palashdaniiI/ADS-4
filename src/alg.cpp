// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len; i++)
    for (int j = i+1; j < len; j++)
      if (arr[i] + arr[j] == value)
        count++;
  return count;
}
int countPairs2(int *arr, int len, int value)
  int count = 0;
  for (int i = 0; i < len; i++)
    for (int j = len - 1; j > i; j--)
      if (((*(arr + i)) + (*(arr + j))) == value)
        count += 1;
  return count;
}
int countPairs3(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len; i++) {
    int left = i + 1;
    int right = len - 1;
    int cen = (left + right) / 2;
    while (left < right) {
      if (arr[cen] < value - arr[i]) {
        left = cen + 1;
      } else {
        right = cen;
      }
    }
    while (arr[left] + arr[i] == value) {
      count += 1;
      left += 1;
    }
  }
  return count;
}
