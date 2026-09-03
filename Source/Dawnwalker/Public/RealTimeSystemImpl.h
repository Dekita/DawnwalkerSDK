#pragma once
#include "CoreMinimal.h"
#include "RealTimeSystemInterface.h"
#include "SaveGameInterface.h"
#include "RealTimeSystemImpl.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API URealTimeSystemImpl : public URealTimeSystemInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
    URealTimeSystemImpl();


    // Fix for true pure virtual functions not being implemented
};

