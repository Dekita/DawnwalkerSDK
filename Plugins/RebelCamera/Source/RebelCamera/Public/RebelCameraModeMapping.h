#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "RebelCameraModeMapping.generated.h"

class URebelCameraMode;

USTRUCT(BlueprintType)
struct REBELCAMERA_API FRebelCameraModeMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelCameraMode> Mode;
    
    FRebelCameraModeMapping();
};

