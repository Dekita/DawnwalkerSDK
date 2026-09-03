#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayFocusAbilityMontageParameters.h"
#include "LoadedMontageParameters.generated.h"

UCLASS(Blueprintable)
class DOGWOODFOCUS_API ULoadedMontageParameters : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayFocusAbilityMontageParameters Data;
    
    ULoadedMontageParameters();

};

