#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerLookAtTurning.h"
#include "DawnwalkerLookAtRegularTurning.generated.h"

class UDawnwalkerLookAtTurnConfig;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerLookAtRegularTurning : public FDawnwalkerLookAtTurning {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDawnwalkerLookAtTurnConfig* TurnConfig;
    
    FDawnwalkerLookAtRegularTurning();
};

