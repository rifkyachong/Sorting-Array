#include <iostream>
#include <algorithm>

//my own sorting function with n log n time complexity
void Mysortarraynlogn(int* ptr, int len) {
	int trade = 0;
	for (int i = 0; (int)pow(2, i) < len; i++) {
		int* start = ptr;
		int* pivot = ptr;
		int* end = ptr;
		int comb_size = (int)pow(2, i);
		int j_max = len / (2 * comb_size);
		for (int j = 0; j < j_max; j++) {
			start = ptr + 2 * j * comb_size;
			pivot = start + comb_size;
			end = pivot + comb_size;
			int* head1 = start;
			while (head1 < pivot) {
				if (*head1 > *pivot) {
					trade = *head1;
					*head1 = *pivot;
					*pivot = trade;
					int* head2 = pivot;
					while (*head2 > *(head2 + 1) && head2 < end - 1) {
						trade = *head2;
						*head2 = *(head2 + 1);
						*(head2 + 1) = trade;
						head2++;
					}
				}
				head1++;
			}
		}
		if (end + comb_size < ptr + len) {
			start = end;
			pivot = start + comb_size;
			end = ptr + len;
			int* head1 = start;
			while (head1 < pivot) {
				if (*head1 > *pivot) {
					int* head2 = pivot;
					trade = *head1;
					*head1 = *pivot;
					*pivot = trade;
					while (*head2 > *(head2 + 1) && head2 < end - 1) {
						trade = *head2;
						*head2 = *(head2 + 1);
						*(head2 + 1) = trade;
						head2++;
					}
				}
				head1++;
			}
		}
	}
}

//my own sorting function with n^2 time complexity
void Mysortarraynn(int* ptr, int len) {
	for (int i = 0; i < len; i++) {
		int min = ptr[i];
		int min_index = i;
		for (int j = i; j < len; j++) {
			if (ptr[j] < min) {
				min = ptr[j];
				min_index = j;
			}
		}
		ptr[min_index] = ptr[i];
		ptr[i] = min;
	}
}

//std::sort() built-in function
int main() {
	const int length = 1000;
	int Arr[length];
	for (int i = 0; i < length; i++) {
		Arr[i] = rand() % 10000;
	}
	Mysortarraynn(Arr,length);
	std::cin.get();
}