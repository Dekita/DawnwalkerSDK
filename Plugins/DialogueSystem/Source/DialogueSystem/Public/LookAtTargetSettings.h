#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELookAtActorType.h"
#include "LookAtTargetSettings.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FLookAtTargetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELookAtActorType, FVector> PositionByType;
    
    FLookAtTargetSettings();
};

