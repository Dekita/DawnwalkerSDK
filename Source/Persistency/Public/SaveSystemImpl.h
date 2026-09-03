#pragma once
#include "CoreMinimal.h"
#include "SaveSystemInterface.h"
#include "SaveSystemImpl.generated.h"

class UAkAudioEvent;
class UStringTable;

UCLASS(Blueprintable)
class PERSISTENCY_API USaveSystemImpl : public USaveSystemInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* SaveMenuStringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioOnGameLoadedEvent;
    
public:
    USaveSystemImpl();

};

