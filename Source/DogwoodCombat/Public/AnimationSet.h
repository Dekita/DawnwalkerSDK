#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AnimationSet.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UAnimationSet : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Animations;
    
public:
    UAnimationSet();

};

