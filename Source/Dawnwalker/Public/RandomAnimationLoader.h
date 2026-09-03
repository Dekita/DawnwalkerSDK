#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RandomAnimationLoader.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class DAWNWALKER_API URandomAnimationLoader : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimSequenceBase>> Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* LoadedAnimation;
    
public:
    URandomAnimationLoader();

};

