#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELookAtActorType.h"
#include "LookAtTargetSettingsOverride.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FLookAtTargetSettingsOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELookAtActorType, FVector> PositionOverrideByType;
    
    FLookAtTargetSettingsOverride();
};

