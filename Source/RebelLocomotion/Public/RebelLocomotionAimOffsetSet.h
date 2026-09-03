#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionAimOffsetAsset.h"
#include "RebelLocomotionAnimSet.h"
#include "RebelLocomotionAimOffsetSet.generated.h"

UCLASS(Blueprintable)
class REBELLOCOMOTION_API URebelLocomotionAimOffsetSet : public URebelLocomotionAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelLocomotionAimOffsetAsset> Assets;
    
    URebelLocomotionAimOffsetSet();

};

