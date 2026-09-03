#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "DawnwalkerPlayerStateBase.generated.h"

class UBloodBarComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API ADawnwalkerPlayerStateBase : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBloodBarComponent* BloodBar;
    
    ADawnwalkerPlayerStateBase(const FObjectInitializer& ObjectInitializer);

};

