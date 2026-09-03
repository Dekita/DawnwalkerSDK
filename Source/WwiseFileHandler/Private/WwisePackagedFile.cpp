#include "WwisePackagedFile.h"

FWwisePackagedFile::FWwisePackagedFile() {
    this->PackagingStrategy = EWwisePackagingStrategy::Source;
    this->bStreaming = false;
    this->PrefetchSize = 0;
    this->MemoryAlignment = 0;
    this->bDeviceMemory = false;
    this->Hash = 0;
}

