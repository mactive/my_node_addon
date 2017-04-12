// addon.cc
#include <node.h>
#include "myobject.h"

namespace demo {
  using v8::Local;
  using v8::Object;

  void InitAll(Local<Object> exports) {
    MyObject::Init(exports);
  }

  NODE_MODULE(addon, InitAll)
}