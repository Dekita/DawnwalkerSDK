#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RebelCharacterMovementConfig.h"
#include "RebelCharacterMovementProfile.generated.h"

UCLASS(Blueprintable)
class REBELLOCOMOTION_API URebelCharacterMovementProfile : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelCharacterMovementConfig MovementConfig;
    
    URebelCharacterMovementProfile();

};

