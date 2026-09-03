#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionAnimSequenceAsset.h"
#include "RebelLocomotionAnimSet.h"
#include "RebelLocomotionAnimSequenceSet.generated.h"

UCLASS(Blueprintable)
class REBELLOCOMOTION_API URebelLocomotionAnimSequenceSet : public URebelLocomotionAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelLocomotionAnimSequenceAsset> Assets;
    
    URebelLocomotionAnimSequenceSet();

};

