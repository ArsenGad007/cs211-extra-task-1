#pragma once

/// <summary>
/// ������� ������ ����� ����� ���������
/// </summary>
/// <param name="time_1"></param>
/// <param name="time_2"></param>
/// <returns></returns>
double seconds_difference(double time_1, double time_2);

/// <summary>
/// ������� ����� ����� ����� ��������
/// </summary>
/// <param name="time_1"></param>
/// <param name="time_2"></param>
/// <returns></returns>
double hours_difference(double time_1, double time_2);

/// <summary>
/// ��������� �������� ���-�� �����
/// </summary>
/// <param name="hours"></param>
/// <param name="minutes"></param>
/// <param name="seconds"></param>
/// <returns></returns>
double to_float_hours(int hours, int minutes, int seconds);

/// <summary>
/// ��������� ���������� �����, ��������� � ��������.
/// </summary>
/// <param name="hours"></param>
/// <returns></returns>
double to_24_hour_clock(double hours);

/// <summary>
/// ���������� ������� �����
/// </summary>
/// <param name="h"></param>
/// <returns></returns>
int get_hours(int sec);

/// <summary>
/// ���������� �������� �����
/// </summary>
/// <param name="m"></param>
/// <returns></returns>
int get_minutes(int sec);

/// <summary>
/// ���������� ��������� �����
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int get_seconds(int sec);

/// <summary>
/// ��������� ����� � UTC+0 � ������ ������
/// </summary>
/// <param name="utc_offset"></param>
/// <param name="time"></param>
/// <returns></returns>
double time_to_utc(int utc_offset, double time);

/// <summary>
/// ��������� ����� � UTC
/// </summary>
/// <param name="utc_offset"></param>
/// <param name="time"></param>
/// <returns></returns>
double time_from_utc(int utc_offset, double time);