#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AudioCharacterCombatHelper.generated.h"

class AActor;

UCLASS(Blueprintable)
class DAWNWALKER_API UAudioCharacterCombatHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioCharacterCombatHelper();

    UFUNCTION(BlueprintCallable)
    static void SetImpactTypeEnder(AActor* ImpactReceiver);
    
    UFUNCTION(BlueprintCallable)
    static void PostAAImpactSounds(AActor* ImpactReceiver, AActor* ImpactInstigator);
    
};

