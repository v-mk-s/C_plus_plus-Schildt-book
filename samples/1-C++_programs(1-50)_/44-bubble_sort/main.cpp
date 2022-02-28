// Использование метода пузырьковой сортировки для упорядочения массива.
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int nums[10];
	int a, b, t;
	int size;
	
	size = 10;
	// Количество элементов, подлежащих сортировке.
	
	// Помещаем в массив случайные числа.
	for(t=0; t<size; t++) nums[t] = rand();
	
	// Отображаем исходный массив.
	cout << "Original array is: ";
	for(t=0; t<size; t++) cout << nums[t] << ' ';
	cout << '\n';
	
	// Реализация метода пузырьковой сортировки.
	for(a=1; a<size; a++)
		for(b=size-1; b>=a; b--) {
			if(nums[b-1] > nums[b]) { // Элементы неупорядочены.
			// Меняем элементы местами.
			t = nums[b-1];
			nums[b-1] = nums[b];
			nums[b] = t;
			}
		}
	// Конец пузырьковой сортировки.
	
	// Отображаем отсортированный массив.
	cout << "Sorted array is: ";
	for(t=0; t<size; t++) cout << nums[t] << ' ';
	
	return 0;
}
