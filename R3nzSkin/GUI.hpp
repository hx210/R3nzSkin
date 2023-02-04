#pragma once

class GUI {
public:
	void render() noexcept;

	bool is_open{ false };
private:
	char str_buffer[256];
};
