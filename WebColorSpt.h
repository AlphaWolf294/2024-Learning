/// This file is necessary to integrate conversion of hex color values to their respective RGB values.
/// The end goal here is enabling WebColors as a ColorMode, completing the set.
/// If there is an issue with this code that is crucial, and you are somehow not accessing this via Gitlab
/// you may reach me, Jeremiah Steninger, either on Gitlab (https://gitlab.blacktoppstudios.com/AlphaWolf294)
/// or via my email address jeremiahsteninger@gmail.com
/// remember to delete WebColorSpt.cpp

#include <iostream>
#include <cstdint>

struct RGB {
	uint8_t r;
	uint8_t g;
	uint8_t b;
};

RGB hexToRGB(const std::string& hex) {
	// Hex string should be 'RRGGBB', will default upon failure
	if (hex[0] == '#' && hex.length () == 7) {
		uint8_t r = std::stoi(hex.substr(1, 2), nullptr, 16);
		uint8_t g = std::stoi(hex.substr(3, 2), nullptr, 16);
		uint8_t b = std::stoi(hex.substr(5, 2), nullptr, 16);
		return {r, g, b};
	}

	return {255, 255, 255}; //if something goes wrong, text should still be viewable with 'White' color. This can be changed to instead use None class.
// color palette starter

}

/*added class to ConsoleColor.h
};

/// @brief These are colors that are meant to be compatible with web interfaces.
/// @note Should work on the web for all systems.
/// @warning This was written outside of the traditional Mezz_Test stack and not authored by its usual developers.
/// continue at your own risk
enum class WebColors : UInt8 {
    None = 0,
    // Most common colors; having every color is impractical and I dont know how else to handle it
    White,
    Black,
    Red,
    Lime,
    Blue,
    Yellow,
    Cyan,
    Magenta,
    Silver,
    Grey,
    Maroon,
    Olive,
    Green,
    Purple,
    Teal,
    Navy,
};
*/