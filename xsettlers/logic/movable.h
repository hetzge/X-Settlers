//#pragma once
//
//#include <glm/glm.hpp>
//#include <mutex>
//#include <queue>
//
//#include <engine.h>
//
//enum Direction : uint8_t
//{ 
//	W, E, NW, NE, SW, SE, COUNT
//};
//
//class Movable
//{
//public:
//	uint8_t m_speed;
//	uint8_t m_steps;
//	uint32_t m_tick;
//	glm::ivec2 m_pos;
//	glm::ivec2 m_tar;
//	Direction m_dir;
//	std::mutex m_lock;
//	std::string* m_name;
//	std::queue<glm::ivec2>* m_path;
//public:
//	Movable(std::string* path, uint8_t& speed)
//		: m_name(path), m_speed(speed) {}
//
//	virtual void on_update(TimeDelta td) = 0;
//};
//
//class Swordsman : public Movable {
//
//};
//
//class Archer : public Movable {
//
//};
//
//class Lancer : public Movable {
//
//};
