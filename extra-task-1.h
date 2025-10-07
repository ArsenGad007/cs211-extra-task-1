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

double time_to_utc(int utc_offset, double time);

double time_from_utc(int utc_offset, double time);