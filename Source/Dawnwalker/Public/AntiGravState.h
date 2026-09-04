#pragma once
#include "CoreMinimal.h"
#include "CharacterStateBase.h"
#include "Engine/HitResult.h"
#include "AntiGravState.generated.h"

USTRUCT(BlueprintType)
struct FAntiGravState : public FCharacterStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult AntiGravSurfaceHit;
    
    DAWNWALKER_API FAntiGravState();
};

