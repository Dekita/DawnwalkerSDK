#pragma once
#include "CoreMinimal.h"
#include "SaveSystemInterface.h"
#include "SaveSystemImpl.generated.h"

class UAkAudioEvent;
class UStringTable;

UCLASS(Blueprintable)
class USaveSystemImpl : public USaveSystemInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* SaveMenuStringTable;
    
public:
    USaveSystemImpl();

};

