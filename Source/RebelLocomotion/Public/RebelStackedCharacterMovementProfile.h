#pragma once
#include "CoreMinimal.h"
#include "RebelStackedCharacterMovementProfile.generated.h"

class URebelCharacterMovementProfile;

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelStackedCharacterMovementProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelCharacterMovementProfile* MovementProfile;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ExternalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovementProfileHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RotationModeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TransitionRulesHandle;
    
    FRebelStackedCharacterMovementProfile();
};

