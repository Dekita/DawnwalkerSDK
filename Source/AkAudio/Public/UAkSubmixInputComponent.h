#pragma once
#include "CoreMinimal.h"
#include "AkAudioInputComponent.h"
#include "UAkSubmixInputComponent.generated.h"

class USoundSubmix;

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UDEPRECATED_UAkSubmixInputComponent : public UAkAudioInputComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* SubmixToRecord;
    
    UDEPRECATED_UAkSubmixInputComponent(const FObjectInitializer& ObjectInitializer);

};

