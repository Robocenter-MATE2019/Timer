#pragma once

#include <Arduino.h>

class Timer {
public:
	void start();
	long elapsed();
	bool is_started();
	void stop();
private:
	long m_start = 0;
	bool m_isStarted = false;
};