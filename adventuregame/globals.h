////////////////////
/// C++ Object-oriented Programming
/// Adventure Game 6
/// Reference answer 
/// anssi.grohn@pkamk.fi
////////////////////
#ifndef __globals_h__
#define __globals_h__

#include <string>
#include <stdexcept>

enum Direction { North, South, East, West, kNumDirs };

// Taneli Peltoniemi
struct GameOverException : public std::runtime_error {
	GameOverException(std::string error) : std::runtime_error(error.c_str()) { }
};
// Taneli Peltoniemi
struct InvalidCommandException : public std::runtime_error {
	InvalidCommandException() : std::runtime_error("I do not understand you\n") { }
};
#endif
