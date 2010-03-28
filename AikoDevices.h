#ifndef AikoDevices_h
#define AikoDevices_h

#ifndef Wiring_h
#include "wiring.h"
#endif

#include "AikoSExpression.h"

using namespace std;

namespace Aiko {
  extern SExpression parameter;             // Declared in AikoCommands.h

  namespace Device {
#include "aiko_devices/AikoDeviceBlink.h"
#include "aiko_devices/AikoDeviceButton.h"
#include "aiko_devices/AikoDeviceClock.h"   // Not really a device
#include "aiko_devices/AikoDeviceNode.h"    // Not really a device
  }
}

#endif
