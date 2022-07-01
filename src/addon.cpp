#include "pcsclite.h"
#include "cardreader.h"

void init_all(v8::Local<v8::Object> target) {
    PCSCLite::init(target);
    CardReader::init(target);
}

NAN_MODULE_WORKER_ENABLED(pcsclite, init_all)
