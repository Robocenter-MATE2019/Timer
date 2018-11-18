#include <Arduino.h>
#include "Timer.h"

Timer::Timer()
{
	m_isStarted = false;
}

void Timer::start()
{
	m_isStarted = true;
	m_start = millis();
}

long Timer::elapsed()
{
	if (m_isStarted) return millis() - m_start; // сделать через тернарный оператор 
	return 0;
}

bool Timer::is_started()
{
	return m_isStarted;
}

void Timer::stop()
{
	m_isStarted = false;
}
