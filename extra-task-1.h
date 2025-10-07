#pragma once

/// <summary>
/// Разница секунд между двумя временами
/// </summary>
/// <param name="time_1"></param>
/// <param name="time_2"></param>
/// <returns></returns>
double seconds_difference(double time_1, double time_2);

/// <summary>
/// Разница часов между двумя временам
/// </summary>
/// <param name="time_1"></param>
/// <param name="time_2"></param>
/// <returns></returns>
double hours_difference(double time_1, double time_2);

/// <summary>
/// Возращает итоговое кол-во часов
/// </summary>
/// <param name="hours"></param>
/// <param name="minutes"></param>
/// <param name="seconds"></param>
/// <returns></returns>
double to_float_hours(int hours, int minutes, int seconds);

/// <summary>
/// Возращает количество часов, прошедших с полуночи.
/// </summary>
/// <param name="hours"></param>
/// <returns></returns>
double to_24_hour_clock(double hours);

/// <summary>
/// Определяет часовую часть
/// </summary>
/// <param name="h"></param>
/// <returns></returns>
int get_hours(int sec);

/// <summary>
/// Определяет минутную часть
/// </summary>
/// <param name="m"></param>
/// <returns></returns>
int get_minutes(int sec);

/// <summary>
/// Определяет секундную часть
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int get_seconds(int sec);

/// <summary>
/// Возращает время в UTC+0 с учётом сдвига
/// </summary>
/// <param name="utc_offset"></param>
/// <param name="time"></param>
/// <returns></returns>
double time_to_utc(int utc_offset, double time);

/// <summary>
/// Возращает время в UTC
/// </summary>
/// <param name="utc_offset"></param>
/// <param name="time"></param>
/// <returns></returns>
double time_from_utc(int utc_offset, double time);