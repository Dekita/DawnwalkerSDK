#pragma once
#include "CoreMinimal.h"
#include "EBloodDrinkingStage.h"
#include "SynchronisedAnimation.h"
#include "Engine/DataAsset.h"
#include "BloodDrinkableAnims.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UBloodDrinkableAnims : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBloodDrinkingStage, FSynchronisedAnimation> Animations;
    
    UBloodDrinkableAnims();

};

