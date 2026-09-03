#pragma once
#include "CoreMinimal.h"
#include "GameTimeSystemInterface.h"
#include "SaveGameInterface.h"
#include "GameTimeSystemImpl.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UGameTimeSystemImpl : public UGameTimeSystemInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
    UGameTimeSystemImpl();


    // Fix for true pure virtual functions not being implemented
};

