// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len-1; i++)
    for (int j = i+1; j < len; j++)
      if (arr[i] + arr[j] == value)
        count++;
  return count;
}
int countPairs2(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len - 1; i++)
    for (int j = len - 1; j > i; j--)
      if (arr[i] + arr[j] == value)
        count++;
  return count;
}
int countPairs3(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len; i++) {
    int left = i+1;
    int right = len;
    int centr = (left + right)/2;
    while (left < right) {
      if (arr[centr] < (value - arr[i])) {
        left = centr+1;
      } else {
        right = centr;
      }
    }
    while (arr[left] + arr[i] == value) {
      count++;
      left++;
    }
  }
  return count;
}
