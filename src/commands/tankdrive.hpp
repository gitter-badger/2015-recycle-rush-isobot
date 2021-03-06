#ifndef RETROBOTICS_ISOBOT_COMMANDS_TANK_DRIVE_HPP
#define RETROBOTICS_ISOBOT_COMMANDS_TANK_DRIVE_HPP

#include "base/commands_baseclean.hpp"

namespace retrobotics {
namespace isobot {
namespace commands {

class TankDrive : public BaseClean {
 public:
  TankDrive();
  auto Execute() -> void;
};
}  // namespace commands
}  // namespace isobot
}  // namespace retrobotics

#endif
