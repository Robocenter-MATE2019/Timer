#include "Timer.h"

void Timer::start()
{
	m_isStarted = true;
	m_start = millis();
}

long Timer::elapsed()
{
	if (m_isStarted) return millis() - m_start;
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