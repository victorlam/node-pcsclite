#include "pcsclite.h"
#include "cardreader.h"

void init_all(v8::Local<v8::Object> target) {
    PCSCLite::init(target);
    CardReader::init(target);
}

#if NODE_MAJOR_VERSION >= 10
NAN_MODULE_WORKER_ENABLED(pcsclite, init_all)
#else
NODE_MODULE(pcsclite, init_all)
#endif
