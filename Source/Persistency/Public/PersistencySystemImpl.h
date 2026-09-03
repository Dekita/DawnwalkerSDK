#pragma once
#include "CoreMinimal.h"
#include "PersistencySystemInterface.h"
#include "SaveGameInterface.h"
#include "PersistencySystemImpl.generated.h"

UCLASS(Blueprintable)
class PERSISTENCY_API UPersistencySystemImpl : public UPersistencySystemInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
    UPersistencySystemImpl();


    // Fix for true pure virtual functions not being implemented
};

