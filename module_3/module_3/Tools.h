#pragma once

/// <summary>
/// Генератор случайной последовательности
/// </summary>
/// <param name="min"> нижняя граница случайных числел </param>
/// <param name="max"> верхняя граница случайных числел </param>
/// <returns> выводит знанчение случайных чисел </returns>
int generation_random(int min, int max);

/// <summary>
/// Функци которая генерирует случайные числа для первого игрока
/// </summary>
/// <returns> выводи значения чисел в промежутке от -5 до 5 </returns>
int first_gamer();

/// <summary>
/// Функци которая генерирует случайные числа для второго игрока
/// </summary>
/// <returns> выводи значения чисел в промежутке от -5 до 5 </returns>
int second_gamer();

/// <summary>
/// Функция которая производит сравнение числел по знаку
/// </summary>
/// <param name="numberOld"> новое число </param>
/// <param name="numberNew"> старое число </param>
/// <returns> выводит true или false, принимаем ноль за положительное число</returns>
bool checkDifferentSigns(int a, int b);