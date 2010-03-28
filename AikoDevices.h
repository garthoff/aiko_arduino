#ifndef AikoDevices_h
#define AikoDevices_h

#ifndef Wiring_h
#include "wiring.h"
#endif

using namespace std;

namespace Aiko {
  namespace Device {
#include "aiko_devices/AikoDeviceBlink.h"
#include "aiko_devices/AikoDeviceButton.h"
  }
}

#endif
