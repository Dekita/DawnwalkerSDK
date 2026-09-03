#include "ItemReadableDataAsset.h"
#include "EItemType.h"

UItemReadableDataAsset::UItemReadableDataAsset() {
    this->ItemProperties = 1;
    this->ItemType = EItemType::Readable;
    this->ReadableAsset = NULL;
}


