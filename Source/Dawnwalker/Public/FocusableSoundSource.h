#pragma once
#include "CoreMinimal.h"
#include "FocusDetectorComponent.h"
#include "FocusableSoundSource.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UFocusableSoundSource : public UFocusDetectorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayInVampireForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayInHumanForm;
    
    UFocusableSoundSource(const FObjectInitializer& ObjectInitializer);

};

